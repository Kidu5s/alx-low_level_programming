#include "function_pointers.h"

/**
 * print_name - prtits a name
 * @f: function pointer
 * @name: the name
 *
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
