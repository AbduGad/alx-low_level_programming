#include "main.h"

/**
*_strstr - finds the first occurrence of string in a string
*@hay: input
*@needle: input
*Return: pointer to the first letter when found
*/

char *_strstr(char *hay, char *needle)
{
	char *p;
	int i, j = 0;

	for (i = 0; hay[i]; i++)
	{
		if (needle[j])
		{
			if (hay[i] == needle[0])
				p = &hay[i];
			if (hay[i] == needle[j])
				j++;
			else
				j = 0;
		}
		else
			return (p);
	}
	return (0);
}
