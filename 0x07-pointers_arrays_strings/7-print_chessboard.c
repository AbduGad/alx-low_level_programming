#include "main.h"

/**
 * print_chessboard - in the name
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < (sizeof(a[i]) / sizeof(a[i][j]));; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
