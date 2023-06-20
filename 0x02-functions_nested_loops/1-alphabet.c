#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - print alpha using _putchar
 *
 * Return: no return for void function
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

}
