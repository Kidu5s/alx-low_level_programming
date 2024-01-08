#include "main.h"

/**
 * _strbrk - searchs a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 *
 * Return: accept if found null if not
 */
char *_strpbrk(char *s, char *accept)
{
	if (s != NULL)
		return (_strpbrk(s, accept));
	else
		return (NULL);
}
