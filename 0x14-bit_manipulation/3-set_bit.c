#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 *
 * @n: pointer
 * @index: index
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = ((*n) | (1 << index));
	return (1);
}
