#include "lists.h"
/**
 * print_listint - prints whats inside each part of list 
 * @h: pointer to list head
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
    size_t size = 0;

    while (h != NULL)
    {
        printf("%i\n", h->n);
        size++;
        h = h->next;
    }
    printf("-> %i elements", size);
    return (size);
}