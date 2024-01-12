#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argv: the array
 * @argc: number of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	for (argc = 0; argv[argc]; argc++)
		;
	argc--;
	printf("%d\n", argc);
	return (0);
}
