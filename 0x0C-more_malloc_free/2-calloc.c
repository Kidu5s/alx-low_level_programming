#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of memmber
 * @size: size of array
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	void *ptr;

	ptr = (void *)malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		for (j = 0; j < size; j++)
		{
			;
		}
	}
	return (ptr);
}	
