#include "main.h"

/**
 * print_octal - print the number  octal.
 * @num: numbre integer
 *
 * Return: return len.
 */

int print_octal(unsigned int num)
{
	char buf[20];
	unsigned int choct;
	int i = 0;
	int len = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		choct = num % 8;
		buf[i++] = '0' + choct;
		num /= 8;
	}
	while (i > 0)
	{
		i--;
		_putchar(buf[i]);
		len++;
	}
	return (len);
}
