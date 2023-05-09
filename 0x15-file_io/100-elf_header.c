#include "main.h"
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
void printmagic(unsigned char *e_ident);
void printclass(unsigned char *e_ident);
void printdata(unsigned char *e_ident);
void printVersion(unsigned char *e_ident);
void printOsAbi(unsigned char *e_ident);
void printAbi(unsigned char *e_ident);
void printType(unsigned int e_type);
void printEntry(unsigned long int e_entry, unsigned char *e_ident);
/**
 * main - displays the information contained in the ELF header
 * @ac:is the count of arguments
 * @av:an array of arguments passed
 *
 * Return: 0 on succes
 */
int main(int ac, char **av)
{
	Elf64_Ehdr head;
	int fd, nread;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: ./elf_header elf_filename\n");
		exit(1);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Can't open %s\n", av[1]);
		exit(90);
	}
	nread = read(fd, &head, sizeof(head));
	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Can't read %s\n", av[1]);
		exit(91);
	}

	printmagic(head.e_ident);
	printclass(head.e_ident);
	printdata(head.e_ident);
	printVersion(head.e_ident);
	printOsAbi(head.e_ident);
	printAbi(head.e_ident);
	printType(head.e_type);
	printEntry(head.e_entry, head.e_ident);
	close(fd);
	return (0);
}

/**
 * printmagic - prints magic information in ELF file
 * @e_ident: - is the string passed
 */
void printmagic(unsigned char *e_ident)
{
	int i = 0;

	printf("  Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * printclass - prints the class info
 * @e_ident: - is the string passed
 */
void printclass(unsigned char *e_ident)
{
	printf("  Class:                             ");

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else
	{
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * printdata - prints the dat info of ELFheader
 * @e_ident: - is the string passed
 */
void printdata(unsigned char *e_ident)
{
	printf("  Data:                              ");

	if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else if (e_ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else
	{
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * printVersion - prints the current version
 * @e_ident: - is the string passed
 */
void printVersion(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	if (EV_CURRENT)
		printf(" (Current)\n");
	else
		printf("\n");
}
/**
 * printOsAbi - prints the  OS/ABI:
 * @e_ident: - is the string passed
 */
void printOsAbi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - Tru64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
			break;
	}
}
/**
 * printAbi - prints the  ABI version:
 * @e_ident: - is the string passed
 */
void printAbi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
			e_ident[EI_ABIVERSION]);
}
/**
 * printType - prints the  type
 * @e_type: - is the string passed
 */
void printType(unsigned int e_type)
{
	printf("  Type:                              ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
			break;
	}
}
/**
 * printEntry - prints the Entry point address
 * @e_entry: is the value of entry
 * @e_ident: is the string passed
 */
void printEntry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#lx\n", e_entry);
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
		printf("%#lx\n", e_entry);
	}
}
