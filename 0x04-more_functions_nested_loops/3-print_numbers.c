#include "main.h"

/**
 * print_numbers - prints the numbers from 0-9
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
