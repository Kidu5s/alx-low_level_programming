#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to upper
 * @str: the string
 *
 * Return: a pointer to char
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
