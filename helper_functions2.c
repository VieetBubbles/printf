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

/**
 * rot13 - Encode a string using rot13
 * @s: String being evaluated
 *
 * Return: Rotated by 13
 */
int _print_rot13(va_list ap)
{
	int i, j;
	char alphabet[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char rAlphbet[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char *s;

	s = va_arg(ap, char *);
	if (!s)
		s = "(null)";
	for (i = 0; s[i]; ++i)
		for (j = 0; alphabet[j]; ++j)
			if (alphabet[j] == s[i])
			{
				_putchar(rAlphbet[j]);
				break;
			}
	return (i);
}
