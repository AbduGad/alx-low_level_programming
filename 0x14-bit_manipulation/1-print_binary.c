#include "main.h"
/**
 * rint_binary - Write a function that prints the binary representation of a number
 * 
 * @n: number
 */
void print_binary(unsigned long int n)
{
    unsigned int copy = n;
    int shifts = 0;

    while (copy)
    {
        shifts++;
        copy >>= 1;
    }
    while(shifts > 0)
    {
        _putchar((n >> shifts) & 1);
        shifts--;
    }
}