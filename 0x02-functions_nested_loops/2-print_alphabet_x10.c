#include "main.h"

/**
 * print_alphabet_x10 -print alphabets 10x
 * no input void
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char a;

	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
