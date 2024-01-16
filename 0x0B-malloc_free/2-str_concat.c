#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second stirng
 *
 * Return: NULL if string is empty or on failure
 * on success return a pointer to a concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *ptr;

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	ptr = malloc(sizeof(char *) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j]; j++)
		ptr[i + j] = s2[j];
	return (ptr);
}
