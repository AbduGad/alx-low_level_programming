#include "lists.h"
/**
 * pop_listint - Write a function that deletes the head node of a listint
 * @head: pointer to head pointer
 * Return: head node data n
 */
int pop_listint(listint_t **head)
{
	listint_t *holder;
	int n;

	if (*head == NULL)
		return (0);
	holder = *head;
	*head = (*head)->next;
	n = holder->n;
	free(holder);
	return (n);
}
