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
 * @c: The character to print
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
 * @str: the string
 *
 * Return: nothing
 */

int _print_string(va_list ap)
{
	int len = 0;
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
	{
		return (0);
	}

	for (len = 0; s[len]; len++)
	{
		_putchar(s[len]);
	}
	return (len);
}}

/**
 * _print_int - function that prints an integer
 * @n: integer
 *
 * Return: nothing
 */

int _print_int(int n)
{
	int i;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
	}
	for (i = 1000000000; i > 0; i /= 10, count++)
	{
		if (n / i)
		{
			if ((n / i) % 10 < 0)
				_putchar(-(n / i % 10) + '0');
			else
				_putchar((n / i % 10) + '0');
		}
		else if (n / i == 0 && i == 1)
		{
			_putchar(n / i % 10 + '0');
		}
	}
	return (count);
}
