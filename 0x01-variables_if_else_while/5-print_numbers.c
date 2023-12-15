#include <stdio.h>

/**
 * main - prints all singile digit numbers of base 10
 * Return: Always 0.
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
