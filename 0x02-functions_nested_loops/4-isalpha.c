#include "main.h"

/**
 * _isalpha - check if char is a lower/upper case or otherwise
 * @c: input
 * Return: 1 if true 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
