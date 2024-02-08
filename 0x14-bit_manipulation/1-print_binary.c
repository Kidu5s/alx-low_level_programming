#include "main.h"

void print_b(unsigned long int n);
/**
 * print_binary - prints the binary representation of a number
 * @n: Number to interpret as binary
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_b(n);
}

/**
 * print_b - prints the binary representaion of a number
 * @n: Number to interpret as bianary
 *
 * Return: NOthing
 */
void print_b(unsigned long int n)
{
	if (n == 0)
		return;
	print_b((n >> 1));
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
