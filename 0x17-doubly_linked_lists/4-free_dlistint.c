#include "lists.h"
/**
 * free_dlistint - frees doubly linked list
 * @head: list head
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->prev)
		head = head->prev;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
