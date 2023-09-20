#include "main.h"
/**
 * print_p - prints the number an hexadecimal.
 * @num: numbre integer
 *
 * Return: reteur len.
 */

int print_p(unsigned long num)
{
	char *str = "0123456789abcdef";
	char buffer[20];
	int i;
	int len;

	if (num == 0)
		return print_string("(nil)");

	len = print_string("0x");
	i = 0;
	while (num)
	{
		buffer[i] = str[num % 16];
		num /= 16;
		i++;
	}

	i--;
	while (i >= 0)
	{
		len += _putchar(buffer[i]);
		i--;
	}

	return (len);
}
