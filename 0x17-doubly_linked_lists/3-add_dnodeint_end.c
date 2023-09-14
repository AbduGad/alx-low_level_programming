#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end of the list
 * @head: head of the list
 * @n: new element value
 * Return: pointer to the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (*head);
	}
	while ((temp)->next)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	return (new);
}
