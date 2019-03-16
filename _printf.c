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

	va_start(ap format);
	while (format && format[i])
	{
		while (argument[j].parameter)
		{
			if (*argument[j].parameter == format[i])
			{
				argument[j].f(ap);
				++count;
			}
			++j;
		}
		j = 0;
		++i;
	}
	va_end(ap);
	return(count);
}
