#include <stdio.h>

/**
 * main - possible combinations of 1 digit
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{		
		putchar(i + '0');
		putchar(',' + ' ');
		i++;
	}
	putchar('\n');
	return (0);
}
