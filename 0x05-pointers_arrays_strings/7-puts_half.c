#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: a pointer to a string
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len, i;

	for (len = 0; str[len]; len++)
		;
	len++;
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i]; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (len - 1) / 2; str[i]; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
