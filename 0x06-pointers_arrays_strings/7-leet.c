#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the stirng
 *
 * Return: a pointer to char
 */
char *leet(char *str)
{
	char alpha[5] = {'a', 'e', 'o', 't', 'l'};
	char Alpha[5] = {'A', 'E', 'O', 'T', 'L'};
	char num[5] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (j = 0; str[j]; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (str[j] == alpha[i] || str[j] == Alpha[i])
				str[j] = num[i];
		}
	}
	return (str);
}
