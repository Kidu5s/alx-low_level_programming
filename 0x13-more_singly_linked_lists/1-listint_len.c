#include "lists.h"

/**
 * listint_len - finds the number of elements in a linked listint_t list
 * @h: a pointer to the first item of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);
}
