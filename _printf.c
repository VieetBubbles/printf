#include "holberton.h"

int _printf(const char *format, ...)
{
	print_type argument[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	va_list ap;
	int i = 0;
	int j = 0;
	int count = 0;
	char *p;

	va_start(ap format);
	for (p = format; *p; p++, i++)
	{
		if (*p != '%')
		{
			_putchar(*p);
			continue;
		}
		for (j = 0; argument[j].parameter; j++)
		{
			if (*argument[j].parameter == *p)
			{
				argument[j].f(ap);
				++count;
			}
		}
	}
	va_end(ap);
	return(count);
}
