#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves the value associated with a key.
 * @ht: pointer to hash table
 * @key: key
 * Return: value for the given key or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *pair;
	unsigned long int i;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);

	if (ht->array[i] == NULL)
		return (NULL);

	pair = ht->array[i];
	while (pair)
	{
		if (strcmp(pair->key, key) == 0)
			return (pair->value);

		pair = pair->next;
	}
	return (NULL);
}
