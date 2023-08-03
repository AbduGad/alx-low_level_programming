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

    if (n == 0)
        _putchar(0 +'0');
    while (copy > 0)
    {
        shifts++;
        copy >>= 1;
    }
    while(shifts > 0)
    {
        shifts--;
        res = (n >> shifts) & 1;
        _putchar(res + '0');
    }
}