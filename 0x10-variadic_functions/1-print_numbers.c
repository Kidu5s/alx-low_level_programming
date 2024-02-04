#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: char separating numbers
 * @n: number of iterations
 *
 * return: returns an int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
			separator = "";
		printf("%d%s", va_arg(ap, int), separator);
	}
	va_end(ap);
	printf("\n");
}
