#include "main.h"

/**
 * flip_bits - returns the nubmer of bites you would need to flip to get
 * form one number to another
 * @n: first nubmer to compare
 * @m: second number to compare
 *
 * Return: the nubmer of bits you would need to flip to get
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}

	return (count);
}
