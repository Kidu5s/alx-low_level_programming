#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a lisint_t list
 * @head: the first item in the list
 * @n: integer
 *
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *tail;

	tail = *head;
	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = temp;
	return (tail);
}
