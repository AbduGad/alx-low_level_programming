#include "main.h"

/**
* string_toupper - change evrything to upper case
* @x: array or pointer input
* Return: upper char
*/

char *string_toupper(char *x)
{
	int i;

	for (i = 0; x[i]; i++)
	{
		if (x[i] <= 'z' && x[i] >= 'a')
			x[i] -= 32;
	}
	return (x);
}
