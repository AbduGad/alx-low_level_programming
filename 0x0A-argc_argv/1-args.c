#include <stdio.h>

/**
* main - print number of arguments
* @argc: argument count
* @argv: pointer to strings
* Return: 0
*/

int main(int argc, char *argv[])
{
	argv[0] = argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
