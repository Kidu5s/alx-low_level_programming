#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: a pointer to a string
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i % 2 != 0)
			continue;
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
