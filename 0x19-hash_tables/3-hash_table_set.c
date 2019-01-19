#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 * Return:  1 if succeeded else 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newElement;
	hash_node_t *temp;
	hash_node_t *head;
	unsigned long int hashIndex;

	if (key == NULL || value == NULL)
		return (0);

	hashIndex = key_index((const unsigned char *) key, ht->size);
	temp = ht->array[hashIndex];
	head = ht->array[hashIndex];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	newElement = malloc(sizeof(hash_node_t));

	if (newElement == NULL)
		return (0);

	newElement->key = strdup(key);
	newElement->value = strdup(value);

	if (head == NULL)
		newElement->next = NULL;
	else
		newElement->next = head;
	ht->array[hashIndex] = newElement;
	return (1);
}
