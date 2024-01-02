#include "main.h"

/**
 * _puts - prints a string
 * @str: a pointer to a string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
