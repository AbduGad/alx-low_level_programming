#include "lists.h"
/**
 * print_dlistint - prints contents of doubly linked list
 * @h: head of the list
 * Return: elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes;

	nodes = 0;
	if (h == NULL)
	{
		printf("Empty list");
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
