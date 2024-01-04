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

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	if (i < j)
		return (-15);
	else if (i > j)
		return (15);
	else
		return (0);
}
