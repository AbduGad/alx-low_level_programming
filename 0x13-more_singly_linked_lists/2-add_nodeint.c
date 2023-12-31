#include "lists.h"
/**
 * add_nodeint - Write a function that adds a new node at the beginning
 * @head: list head
 * @n: value
 * Return: head pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
