#include "main.h"

/**
 * times_table - prints times table
 * not input void
 * Return: void
 */

void time_table(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			_putchar((i * j) + '0');
			_putchar(',');
			_putchar(' ');
			if ((i * j) < 10)
				_putchar(' ');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
