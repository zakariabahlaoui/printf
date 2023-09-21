#include "main.h"
/**
 * print_rot13 - prints convert lowercase to uppercase and reverse.
 * @ptr: pointer
 *
 * Return: Length of the printed.
 */

int print_rot13(char *ptr)
{
	char c;
	int len = 0;

	while (*ptr)
	{
		c = *ptr;
		if (c >= 'A' && c <= 'Z')
		{
			c = c + ('a' - 'A');
		}
		else
		{
			c = c + ('A' - 'a');
		}
		ptr++;
		_putchar(c);
		len++;
	}
	return (len);
}
