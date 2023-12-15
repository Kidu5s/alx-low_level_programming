#include <stdio.h>

/**
 * main - prints alphabet in lowercase and uppercase
 * Return: Always 0.
 */
int main(void)
{
	char alpha, Alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	Alpha = 'A';
	while (Alpha <= 'Z')
	{
		putchar(Alpha);
		Alpha++;
	}
	putchar('\n');
	return (0);
}
