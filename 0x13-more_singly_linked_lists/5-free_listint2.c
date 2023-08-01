#include "lists.h"
/**
 * free_listint2 - frees a list
 * 
 * @head: double pointer to the head of the list 
 */
void free_listint2(listint_t **head)
{
    listint_t *holder;

    if (head == NULL)
        return;
    while (*head != NULL)
    {
        holder = *head;
        *head  = (*head)->next;
        free(holder);
    }
    
}