#include "main.h"


int palindrome(char *s, int first, int len);
int legth(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome(s, 0, legth(s)));
}

/**
 * legth - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int legth(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + legth(s + 1));
}

/**
 * palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @first: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int palindrome(char *s, int first, int len)
{
	if (*(s + first) != *(s + len - 1))
		return (0);
	if (first >= len)
		return (1);
	return (palindrome(s, first + 1, len - 1));
}
