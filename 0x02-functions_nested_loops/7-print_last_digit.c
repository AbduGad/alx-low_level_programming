#include "main.h"

/**
 * print_last_digit - "sigh"
 * @x: input
 *
 * Return: last digit
 */

int print_last_digit(int x)
{
	if (x < 0)
		return (x % 10);
	else
		return ((x * -1) % 10);
}
