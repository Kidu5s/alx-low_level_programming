#include "function_pointers.h"

/**
 * print_name - prits a name
 * @name: the name
 * @str: the string
 * f - function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
