#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: holds the address of the address of the first item in the list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	temp = NULL;
	return (n);
}
