#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print_char - writes the character c to stdout
 * @ap: The character to print
 *
 * Return: nothing
 */

int _print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 * _print_string - function that prints a string
 * @ap: the string
 *
 * Return: nothing
 */

int _print_string(va_list ap)
{
	int len = 0;
	char *s;
	char *str = "(null)";

	s = va_arg(ap, char *);
	if (!s)
	{
		for (len = 0; str[len]; len++)
			_putchar(str[len]);
	}
	for (len = 0; s[len]; len++)
	{
		_putchar(s[len]);
	}
	return (len);
}

/**
 * _print_int - function that prints an integer
 * @ap: integer
 *
 * Return: nothing
 */

int _print_int(va_list ap)
{
	int i;
	int count = 0;
	int n = va_arg(ap, int);

	if (n < 0)
	{
		count += _putchar('-');
	}
	for (i = 1000000000; i > 0; i /= 10)
	{
		if (n / i)
		{
			if ((n / i) % 10 < 0)
				count += _putchar(-(n / i % 10) + '0');
			else
				count += _putchar((n / i % 10) + '0');
		}
		else if (n / i == 0 && i == 1)
		{
			count += _putchar(n / i % 10 + '0');
		}
	}
	return (count);
}
