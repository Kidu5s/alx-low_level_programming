#include "main.h"

/**
 * _strlen - calculate the string length
 * @s: a pointer to string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
