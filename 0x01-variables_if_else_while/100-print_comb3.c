#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0.
 */
int main(void)
{
	int num,num1;

	num = 0;
	while (num < 10)
	{
		num1 = 0;
		while (num1 < 10 && num1 > num)
		{
			putchar(num + '0');
			putchar(num1 + '0');
			if (num + num1 != 17)
			{
				putchar(',');
				putchar(' ');
			}
			num1++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
