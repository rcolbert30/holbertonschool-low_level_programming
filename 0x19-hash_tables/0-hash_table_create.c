#include "hash_tables.h"
#include <stdbool.h>

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size < 1) {
		return NULL;
	}

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL) {
		return (NULL);
	}

	ht->array = (hash_node_t**)malloc(size * sizeof(hash_node_t));
	if (ht->array == NULL) {
		return (NULL);
	}

	memset(ht->array, 0, size * sizeof(hash_node_t));

	ht->size = size;

	return ht;
}
