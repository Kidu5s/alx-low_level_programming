#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Always 0.
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
		alpha++;
	}
	putchar ('\n');
	return (0);
}
