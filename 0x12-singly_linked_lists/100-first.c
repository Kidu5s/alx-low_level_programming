#include <stdio.h>

void first(void) __attribute__((constructor));
/**
 * first - prints a string before the main function is exicuted
 *
 * Return: Nothing
 */
void first(void)
{
	char *s;

	s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", s);
}
