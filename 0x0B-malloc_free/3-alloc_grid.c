#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - makes a 2D array of integers
 * @width: the width of the array
 * @height: the height of the array
 * Return: pointer to the 2D array(Success), NULL(Error)
 */
int **alloc_grid(int width, int height)
{
	int **twod;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	twod = malloc(sizeof(int *) * height);

	if (twod == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		twod[x] = malloc(sizeof(int) * width);
		if (twod[x] == NULL)
		{
			for (; x >= 0; x--)
				free(twod[x]);
			free(twod);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			twod[x][y] = 0;
	}
	return (twod);
}
