#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: the string
 *
 * Return: a pointe to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	int i, len;
	char *ptr;

	for (len = 0; str[len]; len++)
		;

	ptr = malloc(sizeof(char *) * len);
	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
	return (ptr);
}
