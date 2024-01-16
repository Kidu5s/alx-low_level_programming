#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with a spacific char
 * @size: the size of the array
 * @c: the character
 *
 * Return: NULL if size is 0 or if it fails
 * a pointer to the array if success
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;
		return (ptr);
	}
}
	
