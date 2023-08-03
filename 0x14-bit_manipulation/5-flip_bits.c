#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: number
 * @m: number
 * Return: number of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shifts = 0, counter = 0;
	unsigned long int c = (n > m) ? (n) : (m);

	/*printf("c -%lu shifts - %lu\n", c, c >> 10);*/
	if (n == 0 && m == 0)
		return (0);
	while (c)
	{
		c >>= 1;
		shifts++;
	}
	shifts--;
	/*printf("c -%lu shifts - %lu\n", c, n >> shifts);*/
	while (shifts >= 0)
	{
		if ((n & (1 << shifts)) != (m & (1 << shifts)))
			counter++;
		shifts--;
	}
	return (counter);
}
