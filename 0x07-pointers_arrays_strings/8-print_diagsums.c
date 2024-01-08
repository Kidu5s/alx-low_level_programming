#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square martix of integer
 * @a: a pointer to int
 * @size: the size of the matrix
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sumdiag1 = 0;
	int sumdiag2 = 0;

	while (i < (size * size))
	{
		sumdiag1 += a[i];
		i += size + 1;
	}
	while (j < ((size * size) - size))
	{
		j += size - 1;
		sumdiag2 += a[j];
	}
	printf("%d, %d\n", sumdiag1, sumdiag2);
}
