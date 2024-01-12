#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: the number of argument
 * @argv: the array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum;

	sum = 0;
	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		if (isdigit(atoi(argv[argc])))
		{
			for (argc = 0; argv[argc]; argc++)
				sum += atoi(argv[argc]);
		}
		else
			printf("Error\n");
		printf("%d\n", sum);
	}
	return (0);
}
