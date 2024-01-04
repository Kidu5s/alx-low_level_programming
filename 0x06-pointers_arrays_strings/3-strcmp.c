#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] && s2[i] && j == 0; i++)
	{
		j = s1[i] - s2[i];
		i++;
	}
	return (j);
}
