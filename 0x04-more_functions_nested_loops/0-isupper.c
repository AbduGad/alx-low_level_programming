#include "main.h"

/**
* _isupper - checks upper
* @c: input
*
* Return: 0
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (0);
	}
	else
		return (2);
}
