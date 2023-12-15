#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
