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
	char *str;

	str = s;

	for (; *str != '\0'; str++)
	{
		if (*str == c)
			return (str);
	}
	if (c == '\0')
		return (str);
	return (NULL);
}
