#include "main.h"

void main()
{
    unsigned int n = 0;
    unsigned int copy = n, res;
    int shifts = 0;

    while (copy)
    {
        shifts++;
        copy >>= 1;
    }
    while(shifts >= 0)
    {
        res = (n >> shifts) & 1;
        _putchar(res + '0');
        shifts--;
    }
}