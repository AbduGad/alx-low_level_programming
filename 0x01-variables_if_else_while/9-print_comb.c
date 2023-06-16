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
		if (i == 9)
			putchar(i + '$');		
		putchar(i + ',' + ' ');
		i++;
	}
	putchar('\n');
	return (0);
}
