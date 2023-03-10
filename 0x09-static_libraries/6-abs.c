#include "main.h"

/**
 *_abs - Check Holberton
 * @k: An integre input
 * Description: This function returns absolute value of number
 * Return: Absolut value of number k
 */
int _abs(int k)
{
	if (k < 0)
	{
		return (k * (-1));
	}
	else
	{
		return (k);
	}
	return (0);
}
