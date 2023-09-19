#include "main.h"

/**
 * print_int - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 *
 * Return: return lenght
 */

int print_int(int n)
{
	int i, len;
	char c[10];

	len = 0;

	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
		len += 2;
	}

	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
		len += 1;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	i = 0;
	while (n > 0)
	{
		c[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	len += i;
	i--;
	while (i >= 0)
	{
		_putchar(c[i]);
		i--;
	}

	return (len);
}
