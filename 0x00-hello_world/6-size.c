#include <stdio.h>

/**
 * main - program that writes size of various types
 *
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int Li;
	float fl;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(Li));
	printf("Size of a float: %zu byte(s)\n", sizeof(fl));

	return (0);
}
