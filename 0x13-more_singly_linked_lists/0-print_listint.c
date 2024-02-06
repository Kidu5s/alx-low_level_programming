#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: a pointer that holds the address of the first element of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	printf("%d\n", h->n);
	return (i);
}
