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

void _print_char(char c)
{
	write(1, &c, 1);
}

/**
 *
 *
 */

void _print_string(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*(str + i));
	}
	i++;
}

/**
 * _print_percentage
 * @s:
 *
 * Return: nothing
 */

void _print_percentage(char *s)
{
	int i = 0;

	while (*str != '\0')
        {
                _putchar("%");
        }
        i++;
}

/**
 * _print_int - function that prints an integer
 * @n: integer
 *
 * Return: nothing
 */

void _print_int(int n)
{
	unsigned int i;

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
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
