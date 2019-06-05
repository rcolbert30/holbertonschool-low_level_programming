#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @key: key
 * @ht: pointer to the hash table
 * @value: vaule associated with the key
 * Return: 1 on success otherwise 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head;
	hash_node_t *temp;
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	i = key_index((const unsigned char *) key, ht->size);
	temp = ht->array[i];
	head = ht->array[i];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);

	if (head == NULL)
		node->next = NULL;
	else
		node->next = head;
	ht->array[i] = node;
	return (1);
}
