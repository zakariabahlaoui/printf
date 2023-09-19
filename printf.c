#include "main.h"

/**
 * is_printble - check if the conversion specifiers exist
 * @c: the character for check
 *
 * Return: return 0 or 1
 */

int is_printble(char c)
{
	char *str = "diuXxurp";
	int i = 0;

	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * print_arg - print the arg that take from main function
 * @c: the character
 * @arg: thr arg
 *
 * Return: return the length
 *
 */

int print_arg(char c, va_list arg)
{
	int len;

	len = 0;

	if (c == 'c')
		len += print_char(va_arg(arg, int));
	if (c == 's')
		len += print_string(va_arg(arg, char *));
	if (c == 'd' || c == 'i')
		len += print_int(va_arg(arg, int));
	if (c == 'u')
		len += print_unsi(va_arg(arg, unsigned int));

	return (len);
}

/**
 * _printf - produces output according to a format
 * @format: the string
 *
 * Return: return lenght the _pritf print
 *
 */

int _printf(const char *format, ...)
{
	int i;
	int len;
	va_list arg;

	va_start(arg, format);

	if (format == NULL || (format[0] == '%' && format[1] == 0))
		return (-1);

	len = 0;
	i = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				len += print_char('%');
			}
			else if (!is_printble(format[i]))
			{
				return (-1);
			}
			else if (format[i] != '\0')
			{
				len += print_arg(format[i], arg);
				i++;
			}
		}
		else
		{
			len += print_char(format[i]);
			i++;
		}
	}

	va_end(arg);
	return (len);
}
