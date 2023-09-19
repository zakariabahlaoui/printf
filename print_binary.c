#include <stdio.h>

/**
 * print_binary - print the number  octal.
 * @num: numbre integer
 *
 * return: value binary.
 */
 int print_binary(int num)
 {
	int bits[32];
    int i = 0;
    if (num == 0)
	{
        putchar('0');
        return;
    }
	
    while (num > 0)
	{
        bits[i] = num % 2;
        num /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
	{
        putchar(bits[j] ? '1' : '0');
    }
}
