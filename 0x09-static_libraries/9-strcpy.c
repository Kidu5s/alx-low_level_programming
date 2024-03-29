#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: the buffer
 * @src: the string
 *
 * Return: a pointer to the copy of the string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
