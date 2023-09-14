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

	temp = *h;
	counter = 0;
	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		*h = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	while (counter < idx)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		counter++;
	}
	return (temp);
}
