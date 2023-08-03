#include <stdio.h>
#include "main.h"
#include <limits.h>

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
//001100010
//110010010

//00000000001
//10000000000

//10000000000
//00000000011

//01000000000-0
//01000000000-1