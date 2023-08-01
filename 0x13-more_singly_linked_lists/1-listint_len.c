#include "lists.h"
/**
 * listint_len - counts list length
 * @h: pointer to head of list
 * Return: list length
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
