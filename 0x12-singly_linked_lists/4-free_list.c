#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: the beginning of the list
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	if (head == NULL)
		return;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(temp);
	free(head);
}
