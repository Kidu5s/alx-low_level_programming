#include "main.h"

/**
 * print_rev - reverse a string
 * @s: a pointer to a string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len, i;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
