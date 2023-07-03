#include "main.h"
#include <stddef.h>

/**
*_strchr - search for character in string
*@s: string
*@c: character
*Return: pointer to the char in the string s
*/

char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	return ('\0');
}
