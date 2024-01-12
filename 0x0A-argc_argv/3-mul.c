#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: the number of command arguments
 * @argv: the array
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int mul;

	mul = 1;
	if (argc == 1)
		printf("Error\n");
	else
	{
		for (argc = 0; argv[argc]; argc++)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
