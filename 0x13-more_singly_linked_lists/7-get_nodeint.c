#include "lists.h"
/**
 * @get_nodeint_at_index -  Write a function that returns the nth node of a listint_t
 * @head: list head pointer
 * @index: want node at this index
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *holder = head;
    int myindex = 0;

    while (myindex != index)
    {
        myindex++;
        if (holder->next == NULL)
            return (NULL);
        holder = holder->next;
    }
    return (holder);
}
