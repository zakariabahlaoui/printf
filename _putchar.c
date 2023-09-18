#include "main.h"

/**
 * _putchar - print character using function write
 * @c: the character to print
 *
 * Return: return what write return
 *
 */

int _putchar(char c)
{

	return (write(1, &c, 1));
}
