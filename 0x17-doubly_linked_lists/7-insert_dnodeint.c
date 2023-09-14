#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a certain index
 *
 * @h: head of the list
 * @idx: index to insert a node at
 * @n: node value
 * Return: an adress to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter;
	dlistint_t *new, *temp;

	counter = 0;
	if (h == NULL)
		return (NULL);
	temp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (counter < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		counter++;
	}
	new->next = temp->next;
	if (temp->next)
		temp->next->prev = new;
	temp->next = new;
	new->prev = temp;
	return (new);
}
