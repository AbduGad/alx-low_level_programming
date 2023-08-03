#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: value
 * @index: index
 */
int get_bit(unsigned long int n, unsigned int index)
{
    return(((n >> index) & 1));
}