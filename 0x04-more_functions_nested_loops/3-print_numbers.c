#include "main.h"

/**
* print_numbers - its in the name
*
* Return: void
*/

void print_numbers(void)
{
	int i;

	for (i = -1; i < 10; ++i)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
