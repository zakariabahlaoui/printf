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
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
