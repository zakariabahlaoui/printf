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
	int num;
	int last_n = n % 10;
	int d;
	int len = 1;
	int powr = 1;

	n = n / 10;
	num = n;

	if (last_n < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last_n = -last_n;
		len++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			powr = powr * 10;
			num = num / 10;
		}
		num = n;
		while (powr > 0)
		{
			d = num / powr;
			_putchar(d + '0');
			num = num - (d * powr);
			powr = powr / 10;
			len++;
		}
	}
	_putchar(last_n + '0');

	return (len);
}
