#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @s: a pointer to string
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		return (0);
	i = _strlen_recursion(s + 1) + 1;
	return (i);
}
