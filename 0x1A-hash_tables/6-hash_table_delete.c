#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 *
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *holder = NULL;

	for (i = 0; i < ht->size;)
	{
		if (ht->array[i] == NULL)
		{
			i++;
			continue;
		}
		if (ht->array[i]->next || ht->array[i])
		{
			holder = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = holder;
		}
		else
		{
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			i++;
		}
	}
	free(ht->array);
	free(ht);
}