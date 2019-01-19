#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value asspciated with a key
 * @ht: hash table
 * @key: key
 * Return: valuse associated with element of null if key cant be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hashIndex;
	hash_node_t *getValue;

	hashIndex = key_index((const unsigned char *) key, ht->size);

	if (ht == NULL)
		return (0);
	if (ht->array[hashIndex] == NULL)
		return (NULL);

	getValue = ht->array[hashIndex];
	while (getValue != NULL)
	{
		if (strcmp(getValue->key, key) == 0)
			return (getValue->value);
		getValue = getValue->next;
	}
	return (NULL);
}
