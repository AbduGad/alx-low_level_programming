#include "lists.h"
/**
 * add_nodeint_end - adds node to end of list
 * @head: pointer to the head pointer of the list
 * @n: value
 * Return: address to head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new;
    listint_t *current;

    current = *head;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);
    new->n = n;
    if (*head == NULL)
        *head = new;
    else
    {
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new;
    }
    new->next = NULL;
    return (new);
}