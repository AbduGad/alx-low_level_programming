#include "main.h"

/**
 * times_table - prints times table
 * not input void
 * Return: void
 */

void times_table(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			_putchar('0' + (i * j));
			_putchar(',');
			_putchar(' ');
			if ((i * j) < 10)
				_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
