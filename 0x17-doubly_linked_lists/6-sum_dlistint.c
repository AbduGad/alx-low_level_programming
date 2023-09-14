#include "lists.h"
/**
 * sum_dlistint - sums all the data inside a doubly list
 *
 * @head: head of the list
 * Return: sum of all the elements of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
