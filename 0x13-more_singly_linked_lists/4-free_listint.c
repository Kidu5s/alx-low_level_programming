#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the first item in the list
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
