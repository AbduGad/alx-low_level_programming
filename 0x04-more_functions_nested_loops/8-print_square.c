#include "main.h"

/**
* print_square - prints a square od #
* @size: length and width
*
* Return: void
*/

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (i = 1; i <= size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
