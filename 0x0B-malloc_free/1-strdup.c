#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: the string
 *
 * Return: a pointe to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;

	ptr = malloc(sizeof(char *) + 1);
	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
