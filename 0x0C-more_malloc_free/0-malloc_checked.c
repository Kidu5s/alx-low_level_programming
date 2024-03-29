#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(sizeof(void *) * b);
	if (ptr == NULL)
		exit (98);
	return (ptr);
}
