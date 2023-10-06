#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 *
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int comma_flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size;)
	{
		if (comma_flag && ht->array[i])
			printf(", ");
		if (ht->array[i] == NULL)
		{
			i++;
			continue;
		}
		printf("\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);
		comma_flag = 1;
		if(ht->array[i]->next)
		{
			printf("\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
		}
		else
			i++;
	}
	printf("}\n");
}