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
			for (i = 1; i <= size; i++)
			{
				if (i <= size - j)
					_putchar(' ');
				else
					_putchar('#');
			}
			if (j < size)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
