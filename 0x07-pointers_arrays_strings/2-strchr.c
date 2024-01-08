#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: a pointer char
 */
char *_strchr(char *s, char c)
{
	int i, j;
	char *new;

	new = NULL;
	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	for (j = i; s[j]; j++)
		new[j] = s[j];
	return (new);
}
