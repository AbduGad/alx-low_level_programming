#include "main.h"
#include <stdio.h>

/**
 * main - prints the sum of even nums in fabonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	long cn = 1;
	long pn = 0;
	long nn;
	long sum = 0;

	while (cn <= 4000000)
	{
		nn = pn + cn;
		pn = cn;
		cn = nn;
		if ((cn % 2) == 0)
		{
			sum += cn;
		}
	}
	printf("%.0ld\n", sum);
	return (0);
}
