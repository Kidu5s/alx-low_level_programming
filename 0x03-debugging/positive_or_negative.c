#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0.
 */
void positive_or_negative(int i)
{
	int n;

	n = i;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
