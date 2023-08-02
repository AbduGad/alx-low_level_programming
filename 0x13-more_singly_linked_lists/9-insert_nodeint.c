#include "lists.h"
/**
 * insert_nodeint_at_index - Write a function that inserts a new node at idx
 * @head: pointer to list head
 * @idx: index to insert at
 * @n: value
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int myindex = 0;
	listint_t *holder, *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (head == NULL)
		return (NULL);
	
	temp = *head;
	if (idx > 0)
	{
		while (myindex != idx - 1)
		{
			if (!temp || !temp->next)
				return (NULL);
			temp = temp->next;
			myindex++;
		}
		holder = temp->next;
		temp->next = new;
		new->next = holder;
	}
	else
	{
		new->next = temp;
		temp = new;
	}
	return (new);
}
