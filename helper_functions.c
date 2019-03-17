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
}

/**
 * _print_percentage
 * @s:
 *
 * Return: nothing
 */

int _print_percentage(char *str)
{
	int i = 0;

	while (*str != '\0')
        {
                _putchar('%');
        }
        i++;
}

/**
 * _print_int - function that prints an integer
 * @n: integer
 *
 * Return: nothing
 */

int _print_int(va_list ap)
{
	unsigned int i;
	char *n;

	n = va_arg(ap, char *);

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		_print_int(i / 10);
	}
	_putchar(i % 10 + '0');
}
