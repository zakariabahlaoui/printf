#include <stdio.h>

/**
 * print_binary - print the number  octal.
 * @num: numbre integer
 *
 * Return: return len.
 */
int print_binary(int num)
{
	int bits[32];
	int j, i = 0;
	int len = 0;

	if (num == 0)
	{
		putchar('0');
	}
	while (num > 0)
	{
		bits[i] = num % 2;
		num /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		putchar(bits[j] ? '1' : '0');
		len++;
	}
	return (len);
}
