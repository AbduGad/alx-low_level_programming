#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 *
 * @key: input key
 * @size:  the size of the array of the hash table
 * Return: index at which the value is stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
