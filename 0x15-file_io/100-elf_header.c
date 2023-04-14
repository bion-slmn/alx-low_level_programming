#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void display(Elf64_Ehdr elf_header);
void check_elf(unsigned char *e_ident);
/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
	int i = 0;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
			e_ident[i] != 'E' &&
			e_ident[i] != 'L' &&
			e_ident[i] != 'F')
		{
			write(STDERR_FILENO, "ERROR", 5);
			exit(98);

		}
	}
}

/**
 * display - prints information of the ELF.
 * @elf_header: is a struct of ELF 
 *
 * Return: nothing.
 */

void display(Elf64_Ehdr elf_header)
{
	int index = 0;

	printf("Magic: ");
	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", elf_header.e_ident[index]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}

	printf("\nClass:                             ");
    printf("%s\n",elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("Data:                              ");
    printf("%s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version:                           ");
    printf("%u\n", elf_header.e_ident[EI_VERSION]);
    printf("OS/ABI:                            ");
    printf("%u\n", elf_header.e_ident[EI_OSABI]);
    printf("ABI Version:                       ");
    printf("%u\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("Type:                              ");
    printf("%u\n", elf_header.e_type);
    printf("Entry point address:               ");
    printf("%#010x\n", (unsigned int)elf_header.e_entry);
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on sucusss
 */
int main(int argc, char **argv)
{
	int fd, position, readed;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		printf("Can't open file");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Can't open file");
		exit(98);
	}

	position = lseek(fd, 0, SEEK_SET);

	if (position == -1)
	{
		printf("Can't set o begining position");
		exit(99);
	}

	readed = read(fd, &elf_header, sizeof(elf_header));
	if (readed == -1)
	{
		printf("Can't read file");
		exit(100);
	}
	check_elf(elf_header.e_ident);
	display(elf_header);
	close(fd);
	return (0);
}
