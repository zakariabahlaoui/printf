#include "main.h"

/**
 * print_binary - print the number  octal.
 * @num: numbre integer
 *
 * Return: return len.
 */
int print_binary(unsigned int num)
{
	int bi[32];
	int j, i = 0;
	int len = 0;

	if (num == 0)
	{
		_putchar('0');
	}
	while (num > 0)
	{
		bi[i] = num % 2;
		num /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(bi[j] ? '1' : '0');
		len++;
	}
	return (len);
}
