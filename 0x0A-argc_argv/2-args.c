#include <stdio.h>

/**
 * main - prints all argument it receives
 * @argc: the number of command lines
 * @argv: the array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	for (argc = 0; argv[argc]; argc++)
		printf("%s\n", argv[argc]);
	return (0);
}
