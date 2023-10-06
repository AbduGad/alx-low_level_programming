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
	hash_node_t *check;

	if (!ht || !value)
		return (0);
	if (!key || !strlen(key))
	{
		write(2, "key cannot be an empty string", 30);
		return (0);
	}
	index = key_index(key, ht->size);
	check = ht->array[index];

	while (check)
			check = check->next;

	check = malloc(sizeof(hash_node_t));
	if (!check)
		return (0);
	check->key = strdup(key);
	if (!(check->key))
	{
		free(check);
		check = NULL;
		return (0);
	}
	check->value = strdup(value);
	if (!(check->value))
	{
		free(check->key);
		free(check);
		check = NULL;
		return (0);
	}
	check->next = NULL;
}