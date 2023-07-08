#include <stdio.h>
/**
* main - test argv
* @argc:  size of argv
* @argv: pointer ti array of char
* Return: 0
*/
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
