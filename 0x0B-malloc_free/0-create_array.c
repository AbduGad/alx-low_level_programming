#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it with a specific char
 * 
 * @size: size
 * @c: char to initialize with
 * Return: NULL if size = 0 / pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    if (size == 0)
        return (NULL);
    array = malloc(size * sizeof(c));
    if (array == NULL)
    {
        _putchar('M');
        array = "Error";
        return (array);
    }
    for (i = 0; i < size; i++)
        array[i] = c;
    return (array);
}