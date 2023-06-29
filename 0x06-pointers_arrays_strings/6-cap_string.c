#include "main.h"

/**
 * cap_string - changing every word to start with capital letter
 * @x: input
 * Return: char
 */

char *cap_string(char *x)
{
	int i;

	for (i = 0; x[i]; i++)
	{
		if (x[i] >= 'a' && x[i] <= 'z')
			if (i == 0 || x[i - 1] == ' ' || x[i - 1] == '\t'
					|| x[i - 1] == '\n' || x[i - 1] == ','
					|| x[i - 1] == ';' || x[i - 1] == '.'
					|| x[i - 1] == '!' || x[i - 1] == '?'
					|| x[i - 1] == '"' || x[i - 1] == '('
					|| x[i - 1] == ')' || x[i - 1] == '{'
					|| x[i - 1] == '}')
				x[i] -= 32;
	}
	return (x);
}
