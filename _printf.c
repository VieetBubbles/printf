#include "holberton.h"

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
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			continue;
		}
		for (j = 0; argument[j].parameter; j++)
		{
			if (*argument[j].parameter == format[i])
			{
				argument[j].f(ap);
				++count;
			}
		}
	}
	va_end(ap);
	return(count);
}
