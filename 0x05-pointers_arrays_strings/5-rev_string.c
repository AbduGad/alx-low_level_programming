#include "main.h"

/**
* rev_string - reverse a string
* @s: input string
* Return: void
*/

void rev_string(char *s)
{
	int i = 0, j = 0, tmp;

	while (*s)
	{
		i++;
		s++;
	}
	s -= i;
	while (i > j)
	{
		tmp = *(s + (i - 1));
		*(s + (i - 1)) = *(s + j);
		*(s + j) = tmp;
		i--;
		j++;
	}
}
