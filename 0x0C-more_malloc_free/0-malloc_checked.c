#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: the size of memory
 * Return: the pointer to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	int *r;

	r = malloc(b);
	if (r == NULL)
	{
		exit(98);
	}
	return (r);
}
