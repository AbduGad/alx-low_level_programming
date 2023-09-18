#include "main.h"

/**
 *_strpbrk - locate the first occurrence in the string s of any bytes in accept
 *@s: string
 *@accept: string with key words
 *Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
