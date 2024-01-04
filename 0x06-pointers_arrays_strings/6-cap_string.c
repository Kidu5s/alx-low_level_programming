#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string
 * 
 * Return: a pointer to char
 */
char *cap_string(char *str)
{
	char sep[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};
	int i, j;

	for (i = 0; i < 13; i++)
	{
		for (j = 0; str[j]; j++)
		{
			if (str[j] == sep[i])
			{
				str[j+1] -= 32;
			}
			else
				break;
		}
	}
	return (str);
}
