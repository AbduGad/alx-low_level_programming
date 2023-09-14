#include "lists.h"
/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 * @head: head of the list
 * @index: index of the node
 * Return: pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;

	counter = 0;
	if (head == NULL)
		return (NULL);
	while (counter < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		counter++;
	}
	return (head);
}
