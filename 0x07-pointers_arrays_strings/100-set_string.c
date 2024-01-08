#include "main.h"

/**
 * set_string - set the value of a pointer to char
 * @s: a pointer that holds the address of a pointer to char
 * @to: a pointer to char
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
