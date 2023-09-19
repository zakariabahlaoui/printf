#include "main.h"
/**
 * print_Hex - prints the number  hexadecimal.
 * @num: numbre integer
 *
 * return: Length of the printed value.
 */
int print_Hex(unsigned int num, char c) 
{
	char buf[20];
    intj = 0;
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
