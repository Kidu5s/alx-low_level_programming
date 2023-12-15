#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char alpha;

	num = 48;
	while (num < 58)
	{
		putchar(num);
		num++;
	}
	alpha = 'a';
	while (alpha < 'g')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
