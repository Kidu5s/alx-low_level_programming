#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: the numberr of strings passed to function
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (separator == NULL || i == n - 1)
			separator = "";
		if (s == NULL)
			s = "(nil)";
		printf("%s%s", s, separator);
	}
	va_end(ap);
	printf("\n");
}
