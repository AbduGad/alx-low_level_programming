#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of integers.
 * @width: input
 * @height: input
 * Return: pointer to 2-d array
 */
int **alloc_grid(int width, int height)
{
	int **con;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	con = malloc(sizeof(int *) * height);
	if (con == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		con[x] = malloc(sizeof(int) * width);
		if (con[x] == NULL)
		{
			for (; x >= 0; x--)
				free(con[x]);
			free(con);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			con[x][y] = 0;
	}
	return (con);
}