#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: number of bytes
 *
 * Return: a pointer to char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
