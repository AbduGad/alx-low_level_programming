#include <stdio.h>

/**
* main - prints from 0 to 100 for %3 type fizz %5 buzz % both fizzbuzz
*
* Return: 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 && i % 5)
			printf("FizzBuzz");
		else if (i % 5)
			printf("Buzz");
		else if (i % 3)
			printf("Fizz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
