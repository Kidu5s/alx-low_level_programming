#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: the size
 * @cmp: the function pointer
 *
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	j = 0;
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == array[i])
			j += j;
		else if (cmp(array[i]) <= 0)
			return (-1);
		else
			return (1);
	}
	return (j);
}
