#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashbrown = NULL;
	unsigned long int index = 0;

	hashbrown = malloc(sizeof(hash_table_t));
	if (hashbrown == NULL)
	{
		return (NULL);
	}
	hashbrown->size = size;
	hashbrown->array = malloc(sizeof(hash_node_t *) * size);
	if (hashbrown->array == NULL)
	{
		free(hashbrown);
		return (NULL);
	}
	while (index < size)
	{
		hashbrown->array[index] = NULL;
		index++;
	}
	return (hashbrown);
}
