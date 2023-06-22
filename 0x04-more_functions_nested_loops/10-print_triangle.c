#include "main.h"

/**
 * print_triangle - prints a triangle of #s
 * @size: input size
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (i = 1; i < j; i++)
				_putchar(' ');
			_putchar('#');
			if (j < size)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
