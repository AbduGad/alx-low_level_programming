#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	double n = 2;
	double on = 1;
	double sum;

	printf("1, 2, ");
	while (i < 48)
	{
		sum = on + n;
		on = n;
		n = sum;
		printf("%.0f, ", n);
		i++;
	}
	printf("\n");
	return (0);
}
