#include "main.h"

/**
 * leet - encoding string
 * @x: input
 * Return: char
 */

char *leet(char *x)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	for (i = 0; x[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (x[i] == letters[j])
				x[i] = replace[j];
		}
	}
	return (x);
}
