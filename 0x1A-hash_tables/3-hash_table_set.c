#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 *
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value:  value associated with the key(can be an empty string)
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *holder;

	if (!ht || !value)
		return (0);
	if (!key || !strlen(key))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	holder = ht->array[index];

	while (holder)
		holder = holder->next;

	/*printf("here\n");*/
	holder = malloc(sizeof(hash_node_t));
	if (!holder)
		return (0);
	holder->key = strdup(key);
	if (!(holder->key))
	{
		free(holder);
		holder = NULL;
		return (0);
	}
	holder->value = strdup(value);
	if (!(holder->value))
	{
		free(holder->key);
		free(holder);
		holder = NULL;
		return (0);
	}
	holder->next = ht->array[index];
	ht->array[index] = holder;
	/*printf("end\n");*/

	return (1);
}
