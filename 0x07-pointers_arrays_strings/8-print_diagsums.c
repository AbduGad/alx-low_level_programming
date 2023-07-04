#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - in the name
 *@a: input
 *@s: input
 */

void print_diagsums(int *a, int s)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < s * s; i += s + 1)
		sum1 += *(a + i);
	for (i = (s * s) - 1; i >= 0; i -= s - 1)
		sum2 += *(a + i);
	printf("%d, %d\n", sum1, sum2);
}
