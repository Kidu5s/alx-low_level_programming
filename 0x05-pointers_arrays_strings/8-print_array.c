#include "main.h"

/**
 * print_array - prints n elelments of an array of integers
 * @a: a pointer to int of array
 * @n: number of array
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
