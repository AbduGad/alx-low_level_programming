#include "lists.h"
/**
 * sum_listint -  Write a function that returns the sum of all the data n
 * @head: head list pointer
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *holder;

	holder = head;
	if (!holder)
		return (0);
	while (holder)
	{
		total += holder->n;
		holder = holder->next;
	}
	return (total);
}
