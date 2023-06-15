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
	long long int lli;
	float fl;

	printf("Size of a char: %zu\n", sizeof(c));
	printf("Size of an int: %zu\n", sizeof(i));
	printf("Size of a long int: %zu\n", sizeof(li));
	printf("Size of a long long int: %zu\n", sizeof(lli));
       	printf("Size of a float: %zu\n", sizeof(fl));
	return (0);
}
