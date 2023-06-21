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
	while (i <= 50)
	{
		sum = on + n;
		on = n;
		n = sum;
		printf("%f, ", n);
		i++;
	}
	printf("\n");
	return (0);
}
