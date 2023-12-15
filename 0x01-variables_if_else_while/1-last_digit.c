#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - finds if the last digit is
 * greater than 5 or equal to 0 or
 * is less than 5 and greater than 0
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int i = n % 10;

	if (n < 0)
		n = -1 * n;
	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else if ((n % 10 < 6) && (n % 10 > 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);

	return (0);
}