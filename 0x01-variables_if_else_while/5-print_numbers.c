#include <stdio.h>

/**
 * main - printing single digit numbers of base 10
 *
 * Return: 0
 */

int main(void)
{
	int b10 = 0;

	while (b10 < 10)
	{
		printf("%i", b10);
		b10++;
	}
	printf("\n");
	return (0);
}
