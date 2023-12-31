#include "main.h"

/**
 *print_rev - prints string in reverse
 *@s: input string
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s -= len;
	while (len > 0)
	{
		_putchar(*(s + (len - 1)));
		len--;
	}
	_putchar('\n');
}
