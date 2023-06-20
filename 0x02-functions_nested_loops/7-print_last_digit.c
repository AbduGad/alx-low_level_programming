#include "main.h"

/**
 * print_last_digit - "sigh"
 * @x: input
 *
 * Return: last digit
 */

int print_last_digit(int x)
{
	if (x > 0)
	{
		_putchar('0' + (x % 10));
		return (x % 10);
	}
	else if (x == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('0' + ((x % 10) * -1));
		return ((x % 10) * -1);
	}
}
