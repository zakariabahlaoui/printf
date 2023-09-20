#include "main.h"

/**
 * print_r - reverse a string
 * @s: the string
 *
 * Return: return lenght
 *
 */

int print_r(char *s)
{
	int i;
	int len;

	i = 0;
	while (s[i])
		i++;

	len = i;
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}

	return (len);
}
