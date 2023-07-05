#include "main.h"

/**
*_puts_recursion - no time
*@s: input
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts-recursion(s++);
	}
	else
		_putchar('\n');
}
