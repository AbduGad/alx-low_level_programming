#include <stdio.h>

/**
 * main - printing alphabets lower and upper cases
 *
 * Return: 0
 */

int main(void)
{
	char lowerc = 'a';
	char upperc = 'A';

	while (lowerc <= 'z')
	{
		putchar(lowerc);
		lowerc++;
	}

	while (upperc <= 'Z')
	{
		putchar(upperc);
		upperc++;
	}

	putchar('\n');
	return (0);

}
