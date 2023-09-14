#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - counts the elements in a linked list
 * @head: head of the list
 * @n: new node value
 * Return: elements of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if ((*head) == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (*head);
	}
	while ((*head)->prev)
		*head = (*head)->prev;
	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
