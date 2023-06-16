#include <stdio.h>

/**
 * main - lower case alpha in reverse
 *
 * Return: 0
 */

int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n')
	return (0);
}
