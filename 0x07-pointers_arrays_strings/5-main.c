#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, wolrd";
	char *f = "world;
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
