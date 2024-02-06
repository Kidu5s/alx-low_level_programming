#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: the first item on the list
 * @n: the integer
 *
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

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
	temp->next = *head;
	*head = temp;
	return (*head);
}
