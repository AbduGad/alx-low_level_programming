#include "main.h"

/**
*puts_half - prints second half of str
*@str: input string
*/

void puts_half(char *str)
{
	int i = 0, len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	str -= len;
	i = (len % 2 == 0) ? len / 2 : (len + 1) / 2;

	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
