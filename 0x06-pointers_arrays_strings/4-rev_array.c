#include "main.h"

/**
* reverse_array - in the name
* @a: array
* @n: array size
*/

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n - 1; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
