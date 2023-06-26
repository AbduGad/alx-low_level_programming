#include "main.h"

/**
* swap_int - swaps 2 ints
* @a: int
* @b: int
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
