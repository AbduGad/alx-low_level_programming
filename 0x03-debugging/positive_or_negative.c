#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - getting random number and checking posi or negi or 0
 *
 * Return: 0
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%d is negative\n", n);
		}
	}
}
