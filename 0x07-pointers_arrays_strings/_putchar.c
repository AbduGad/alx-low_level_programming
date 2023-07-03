#include <unistd.h>

/**
 * _putchar - using _putchar to print
 *
 * c - caharacter input
 * Return: 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

