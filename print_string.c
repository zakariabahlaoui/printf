#include "main.h"

/**
 * print_string - print string usin function write
 * @str: the string to print
 *
 * Return: retern len
 *
 */

int print_string(char *str)
{
	int len;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}

	len = _strlen(str);
	write(1, str, len);

	return (len);
}
