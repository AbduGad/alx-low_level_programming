#include "lists.h"
/**
 * free_listint - frees lintint_t
 * @head: head pointer to the list 
 */
void free_listint(listint_t *head)
{
    listint_t *holder;

    while (head != NULL)
    {
        holder = head;
        head  = head->next;
        free(holder);
    }
}