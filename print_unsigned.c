#include "main.h"

/**
 * num_len - get len to number
 * @num: the intger
 *
 * Return: return lenght
 */

int num_len(unsigned int num)
{
	int len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

/**
 * _uitoa - get the number and assigned in array
 * @n: the intger
 *
 * Return: return array the number
 */

char *_uitoa(unsigned int n)
{
	char *num;
	int len;

	len = num_len(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

/**
 * print_unsi - get unsigned number
 * @n: the intger
 *
 * Return: return lenght
 */

int print_unsi(unsigned int n)
{
	int len;
	char *num;

	len = 0;
	if (n == 0)
		len += _putchar('0');
	else
	{
		num = _uitoa(n);
		len += print_string(num);
		free(num);
	}
	return (len);
}
