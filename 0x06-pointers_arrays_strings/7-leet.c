#include "main.h"

/**
 * leet - encode a sting to 1337.
 * @p: is the string encoded
 *
 * Return: encoded string
 */
char *leet(char *p)
{
	int i = 0, k;

	char str[] = {'A', 'a', 'E', 'e', 'o', 'O', 'L', 'l', 't', 'T'};
	char num[] = {'4', '4', '3', '3', '0', '0', '1', '1', '7', '7'};

			while (*(p + i))
			{
				for (k = 0; k < 10; k++)
				{
					if (p[i] == str[k])
						p[i] = num[k];
				}
				i++;
			}
			return (p);
}
