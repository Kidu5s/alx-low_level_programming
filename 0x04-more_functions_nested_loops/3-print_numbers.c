#include "main.h"

/**
 * print_numbers - prints numbers between 0 and 9
 * Return: void
 */

void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
