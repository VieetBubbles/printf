#include "holberton.h"
/**
 * _printf - function that replicates what printf does
 * @format: a character string
 *
 * Return:  the number of characters printed
 */

int _printf(const char *format, ...)
{
	print_type argument[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_int},
		{"i", _print_int},
		{NULL, NULL}
	};
	va_list ap;
	int i;
	int j;
	int count = 0;

	va_start(ap, format);
	if (!format)
		return (-1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			continue;
		}
		if (format[i] == '%' && format[i + 1] == '%')
			count += _putchar('%');
		for (j = 0; argument[j].parameter; j++)
		{
			if (*argument[j].parameter == format[i + 1])
			{
				count += argument[j].f(ap);
			}
		}
		if (!argument[j].parameter)
			return (-1);
		i++;
	}
	va_end(ap);
	return (count);
}
