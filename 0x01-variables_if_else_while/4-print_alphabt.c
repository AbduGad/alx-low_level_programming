#include <stdio.h>

/**
 * main - printing alphabets except e and q
 *
 * Return: 0
 */

int main(void)
{
	char alph = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
		alpha++;
	}
	putchar('\n')
	return (0);
}
