#include "main.h"
/**
 * rint_binary - Write a function that prints the binary representation of a number
 * 
 * @n: number
 */
void print_binary(unsigned long int n)
{
    unsigned long int copy = n, res;
    int shifts = 0;

    while (copy > 0)
    {
        shifts++;
        copy >>= 1;
    }
    if (shifts == 0)
        _putchar(0 +'0');
    while(--shifts > 0)
    {
        res = (n >> shifts) & 1;
        _putchar(res + '0');
    }
}