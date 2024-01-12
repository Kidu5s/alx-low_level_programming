#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the buffer
 * @src: the string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (j = 0; dest[j]; j++)
		;
	for (i = 0; src[i] != '\0'; i++)
		dest[i + j] = src[i];

	return (dest);
}
