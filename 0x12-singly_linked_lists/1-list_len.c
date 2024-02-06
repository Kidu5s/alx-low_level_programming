#include "lists.h"

/**
 * list_len - finds the number of elements in a linked
 * @h: a pointer to the list
 *
 * Return: Nothing.
 */
size_t list_len(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
			return (0);
		h = h->next;
	}
	return (i);
}
