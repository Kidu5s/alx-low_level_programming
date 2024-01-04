#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: second string
 * @src: first string
 * @n: number of bytes
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j] && j < n; j++)
		dest[j + i] = src[j];
	return (dest);
}
