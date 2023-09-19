#include "main.h"
/**
 * print_hex - prints the number an hexadecimal.
 * @num: numbre integer
 * @c: string
 *
 * return: reteur len.
 */
int print_hex(unsigned int num, char c)
{
	char buf[20];
	int j = 0;
	int chHex, len = 0;

	if (num == 0)
	{
		putchar('0');
		return;
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
		putchar(buf[j]);
		len++;
	}
	return (len);
}
