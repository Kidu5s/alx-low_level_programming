#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the second string
 * @src: the first string
 * @n: number of bytes
 *
 * Return: a pointer to char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
