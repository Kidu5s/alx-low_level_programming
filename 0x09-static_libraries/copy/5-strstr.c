#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to char
 * @needle: pointer to char
 *
 * Return: begginging of the located sub
 * NUll if ther is not any
 */
char *_strstr(char *haystack, char *needle)
{
	if (haystack != NULL)
		return (_strstr(haystack, needle));
	else
		return (NULL);
}
