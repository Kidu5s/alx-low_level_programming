#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
