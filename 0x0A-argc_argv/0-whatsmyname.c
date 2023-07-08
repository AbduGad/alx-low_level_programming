#include <stdio.h>
/**
* main - test argv
* @argc:  size of argv
* @argv: pointer ti array of char
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
