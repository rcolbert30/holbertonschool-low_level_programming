#include "hash_tables.h"
#include <stdbool.h>
/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 * Return: pointer to hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	if (size < 1)
	{
		return (NULL);
	}

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	memset(ht->array, 0, size * sizeof(hash_node_t));
	return (ht);
}
