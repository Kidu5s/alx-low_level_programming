#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: the array
 * @size: the size
 * @action: function pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
