#include "holberton.h"

/**
 * _print_reverse - Prints reversed string
 * @ap: Action pointer
 *
 * Return: Number of digits
 */
int _print_reverse(va_list ap)
{
	int len = 0;
	int i;
	char *s;

	s = va_arg(ap, char *);
	if (!s)
		s = "(null)";
	while (s[len])
		++len;
	i = len - 1;
	while (i >= 0)
		_putchar(s[i--]);
	return (len);
}
