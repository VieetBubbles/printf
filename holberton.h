#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - print
 * @type: The operator
 * @f: The function associated
 */
typedef struct print
{
	char *parameter;
	int (*f)(va_list ap);
} print_type;

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list ap);
int _print_string(va_list ap);
int _print_percentage(va_list ap);
int _print_int(va_list ap);
#endif /* _HOLBERTON_H_ */
