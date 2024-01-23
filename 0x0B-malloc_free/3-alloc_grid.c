#include "main.h"

/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a poitner to a 2D array of integers
 * NULL on failure or withd /height is 0 or neg
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	ptr = malloc(sizeof(int) * width);

	for (i = 0; i < height; i++)
	{
		*ptr = malloc(sizeof(int) * height);
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
