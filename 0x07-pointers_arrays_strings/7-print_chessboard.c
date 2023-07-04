#include "main.h"

/**
 * print_chessboard - in the name
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; (sizeof(a[i]) / sizeof(a[i][j])); i++)
	{
		for (j = 0; a[i][j]; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
