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
	int num, d;
	int last_n;
	int len = 1;
	int power = 1;

	n = n / 10;
	num = n;
	last_n = n % 10;

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
			power = power * 10;
			num = num / 10;
		}
		num = n;
		while (power > 0)
		{
			d = num / power;
			_putchar(d + '0');
			num = num - (d * power);
			power = power / 10;
			len++;
		}
	}
	_putchar(last_n + '0');

	return (len);
}
