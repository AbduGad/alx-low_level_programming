#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 *
 * @ht:  hash table you want to look into
 * @key:  key you are looking for
 * Return: value, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *holder;

	if (!key || !ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	holder = ht->array[index];
	while (holder && strcmp(holder->key, key))
		holder = holder->next;

	if (!holder)
		return (NULL);

	return (holder->value);
}
