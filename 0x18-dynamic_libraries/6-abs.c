#include "main.h"

/**
 * _abs - return absolute value
 * @x: input
 *
 * Return: abs number
 */

int _abs(int x)
{
	if (x < 0)
		return (x * -1);
	else
		return (x);
}
