#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int diff;
    int counter;

    diff = n ^ m;
    counter = 0;

    while (diff)
    {
        counter++;
        diff &= (diff - 1);
    }

    return (counter);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = flip_bits(0, 0);
    printf("%u\n", n);
    n = flip_bits(234234423402, 1987609);
    printf("%u\n", n);
    n = flip_bits(ULONG_MAX, ULONG_MAX - 1);
    printf("%u\n", n);
    n = flip_bits(ULONG_MAX, 0);
    printf("%u\n", n);
    return (0);
}