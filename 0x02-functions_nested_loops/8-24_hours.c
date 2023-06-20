#include "main.h"

/**
 *
 *
 *
 *
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while (i < 24)
	{
		while (j <= 60)
		{
			_putchar(('0' + i) / 10);
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}	
		i++;
	}
}
