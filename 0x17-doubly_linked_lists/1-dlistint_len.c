#include "lists.h"
/**
 * dlistint_len - counts the elements in a linked list
 * @h: head of the list
 * Return: elements of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);
	while (h->prev)
		h = h->prev;
	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
