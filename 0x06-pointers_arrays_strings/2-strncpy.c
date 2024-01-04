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
	int i, j;

	i = 0;
	j = 0;

	while (n > j)
	{
		if (src[j] == '\0')
		{
			for (; j < n; j++)
			{
				dest[i] = '\0';
				i++;
			}
		}
		else
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	}
	return (dest);
}
