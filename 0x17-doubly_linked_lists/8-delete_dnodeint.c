#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at a specific point
 *
 * @head: head of the list
 * @index: index to delete
 * Return: 1 on success and -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *temp;

	count = 0;
	if (head == NULL)
		return (-1);
	temp = *head;
	if (*head == NULL)
		return (-1);
	while (count < index)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		count++;
	}
	if (temp->prev)
		temp->prev->next = temp->next;
	else
		*head = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
