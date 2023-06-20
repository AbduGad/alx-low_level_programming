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
	int k;

	while (i < 10)
	{
		_putchar('0');
		j = 1;
		while (j < 10)
		{
			k = i * j;

			_putchar(',');
			_putchar(' ');
			if (k < 10)
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
