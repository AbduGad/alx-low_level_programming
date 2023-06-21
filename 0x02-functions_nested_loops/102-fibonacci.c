#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0
 */

int main()
{
	int i = 0;
	int n = 2;
	int on = 1;
	int sum;

	printf("1, 2, ");
	while (i <= 50)
	{
		sum = on + n;
		on = n;
		n = sum;
		
		printf("%d, ", n);
	}
	printf("\n");
	return (0);
}
