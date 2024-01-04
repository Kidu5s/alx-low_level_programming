#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string
 *
 * Return: a pointer to char
 */
char *cap_string(char *str)
{
	char sep[] = {',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}', ' ', '\t', '\n'};
	int j, i;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j <= 12; j++)
		{
			if (str[0] <= 'z' && str[0] >= 'a')
				str[0] -= 32;
			else if (str[i] == sep[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
				str[i + 1] -= 32;
		}
	}
	return (str);
}
