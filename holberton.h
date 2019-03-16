#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print - print
 * @type: The operator
 * @f: The function associated
 */
typedef struct print
{
	char *parameter;
	void (*f)(va_list ap);
} print_type;

int _printf(const char *format, ...);
int _putchar(char c);
#endif /* _HOLBERTON_H_ */
