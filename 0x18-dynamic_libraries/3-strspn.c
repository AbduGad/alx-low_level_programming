#include "main.h"

/**
 *_strspn - checks if s contains any of accept letters until we reach a 'SPACE'
 *@s: string
 *@accept: letters to check
 *Return: counter or 0 if none
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
			return (c);
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				c++;
	}
	return (c);
}
