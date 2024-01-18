#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of byte
 *
 * Return: a pointer to a newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, len2, j, i;

	char *ptr;

	for (len = 0; s1[len]; len++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	ptr = malloc(len + len2 + 1);
	if (ptr == NULL)
		return (NULL);
	if (n >= len2)
		n = len2;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] && j < n; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
