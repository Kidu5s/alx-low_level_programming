#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: a pointer to a pointer that holds the first element of the list
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head, *temp2, *temp3;

	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1; i++)
	{
		temp = temp->next;
	}
	temp3 = temp->next;
	temp2 = temp->next->next;
	free(temp3->next);
	free(temp3);
	temp->next = temp2;

	return (1);
}
