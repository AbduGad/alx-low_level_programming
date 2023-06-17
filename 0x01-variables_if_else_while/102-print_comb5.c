#include <stdio.h>

/**
 * main - all possible combinations of 2 two digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j;

	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}


