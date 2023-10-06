#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
	int hti;

    ht = hash_table_create(1024);
    hti = hash_table_set(ht, "hetairas", "cool");
	printf("%d\n", hti);
	hti = hash_table_set(ht, "mentioner", "cool");
	printf("%d\n", hti);
    return (EXIT_SUCCESS);
}