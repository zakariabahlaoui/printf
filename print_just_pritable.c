#include "main.h"
/**
 * print_just_printbale - print exclusuives string.
 * @s: the string
 * Return: the length of the string.
 */

int print_just_printbale(char *s)
{
	int i, len = 0;
	int hex;

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			hex = s[i];
			if (hex < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_hex(hex, 'X');
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
