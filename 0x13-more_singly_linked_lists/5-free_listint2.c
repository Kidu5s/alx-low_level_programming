#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer that pointers to a pointer that holds the address
 * of the first item on the list
 *
 * Return: NOthing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
	free(*head);
}
