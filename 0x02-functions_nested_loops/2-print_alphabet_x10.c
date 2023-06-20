#include "main.h"
#include <unistd.h>

/**
 * print alpha - prints alpha 10x
 * 
 * Return: no return its void
 */

void print_alphabet_x10(void)
{
	int i;

	while (i < 11)
	{
		print_alphabet();
		_putchar('\n');
	}
}
