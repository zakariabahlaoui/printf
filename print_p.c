#include "main.h"
/**
 * print_p - prints the number an hexadecimal.
 * @num: numbre integer
 *
 * Return: reteur len.
 */

int print_p(unsigned long num)
{
	char buf[20];
	unsigned int j = 0;
	unsigned int ch;
	unsigned int len = 0;

	if (num == NULL)
		write(1, "nil", 3);

	_putchar('0');
	_putchar('x');

	len = 2;

	if (num == 0)
	{
		_putchar('0');
	}
	while (num > 0)
	{
		ch = num % 16;
		if (ch < 10)
		{
			buf[j++] = '0' + ch;
		}
		else
		{
			buf[j++] = 'a' + (ch - 10);
		}
		num /= 16;
	}
	while (j > 0)
	{
		j--;
		_putchar(buf[j]);
		len++;
	}
	return (len);
}
