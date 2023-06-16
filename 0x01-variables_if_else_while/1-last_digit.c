#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	/**
	 * main - function to print last digit of n
	 *
	 * Return: 0
	 */
	int end;

	end = n%10;

	if (end > 5)
		printf("Last digit of %i is %i and is greater than 5" , n, end);
	else
		if (end == 0)
			printf("Last digit of %i is %i and is 0" , n, end);
		else if ( end < 6)
			printf("Last digit of %i is %i and is less than 6 and not 0", n, end);

	return (0);
}
