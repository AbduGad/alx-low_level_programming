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

    ht = hash_table_create(1024);
	printf("1	%ld\n", key_index((const unsigned char *)"hetairas", 1024));
    hash_table_set(ht, "hetairas", "1cool");
	hash_table_set(ht, "mentioner", "1cool");
	printf("2	%ld\n", key_index((const unsigned char *)"heliotropes", 1024));
	hash_table_set(ht, "heliotropes", "2cool");
	hash_table_set(ht, "neurospora", "2cool");
	printf("3	%ld\n", key_index((const unsigned char *)"depravement", 1024));
	hash_table_set(ht, "depravement", "3cool");
	hash_table_set(ht, "serafins", "3cool");
	printf("4	%ld\n", key_index((const unsigned char *)"stylist", 1024));
	hash_table_set(ht, "stylist", "4cool");
	hash_table_set(ht, "subgenera", "4cool");
	printf("5	%ld\n", key_index((const unsigned char *)"hetairas", 1024));
	hash_table_set(ht, "mentioner", "cool");
	hash_table_print(ht);
    return (EXIT_SUCCESS);
}
