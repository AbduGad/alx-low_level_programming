#include "main.h"

/**
 *_memset - put b to the n bites of s
 *@s: destination
 *@b: bytes to be placed
 *@n: number of bytes of s to be replaced
 *Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
