#include "listint.h"

/**
 * sum_listint - adds all the data in the list
 * @head: a pointer that holds the address of first element in the list
 *
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->;
		temp = temp->next;
	}
	return (sum);
}
