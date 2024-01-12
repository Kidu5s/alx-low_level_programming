#include "main.h"

/**
 * _puts - prints a string
 * @str: a pointer to a string
 *
 * Return: Nothing
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
