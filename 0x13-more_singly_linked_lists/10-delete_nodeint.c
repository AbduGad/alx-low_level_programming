#include "lists.h"
/**
 * delete_nodeint_at_index - eletes the node at index
 * @head: head pointer
 * @index:  is the index of the node that should be deleted
 * Return: 1 success -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *temp;
	unsigned int myindex = 0;

	if (!head || *head == NULL)
		return (-1);
    if (index == 0)
    {
        previous = (*head)->next;
        free(*head);
        *head = previous;
        return (1);
    }
	temp = *head;
	while (myindex != index)
	{
		myindex++;
		if (myindex == index - 1)
			previous = temp;
		if (!temp)
			return (-1);
		temp = temp->next;
	}
	previous->next = temp->next;
	free(temp);
	return (1);
}
