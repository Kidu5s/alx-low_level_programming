#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	ptr = malloc(sizeof(int) * (max + min));
	if (ptr == NULL)
		return (NULL);
	if (min > max)
		return (NULL);
	for (i = 0; i >= min && i <= max; i++)
		;
	return (ptr);
}
