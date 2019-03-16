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
	
}
