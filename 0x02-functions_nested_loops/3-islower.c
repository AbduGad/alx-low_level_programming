#include "main.h"
/**
 * _islower - check lower case
 *
 * int c - character input
 * Return: 1 is true 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
