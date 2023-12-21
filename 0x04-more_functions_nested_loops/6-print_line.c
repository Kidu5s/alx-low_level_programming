#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of lines
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i < n;i++)
		_putchar('_');
}
