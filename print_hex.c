#include "main.h"
/**
 * print_hex - prints the number an hexadecimal.
 * @num: numbre integer
 * @c: string
 *
 * Return: reteur len.
 */

int print_hex(unsigned int num, char c)
{
	char buf[20];
	unsigned int j = 0;
	unsigned int chHex;
	unsigned int len = 0;

	if (num == 0)
	{
		_putchar('0');
	}
	while (num > 0)
	{
		chHex = num % 16;
		if (chHex < 10)
		{
			buf[j++] = '0' + chHex;
		}
		else
		{
			if (c == 'x')
				buf[j++] = 'a' + (chHex - 10);
			if (c == 'X')
				buf[j++] = 'A' + (chHex - 10);
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
