#include "lists.h"

/**
 * get_nodeint_at_index - finds a node at a spacific position
 * @head: a pointer that holds the address of the first element of the list
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node of a listint_t list
 * NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (temp != NULL)
			temp = temp->next;
		else
			return (NULL);
	}
	return (temp);
}
