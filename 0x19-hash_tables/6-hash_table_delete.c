#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hast table
 * Return: none
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *temp = NULL;
	hash_node_t *n = NULL;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			continue;
		}
		else if (ht->array[index] && ht->array[index]->next)
		{
			for (n = ht->array[index]; n; n = n->next)
			{
				if (temp)
				{
					free(temp->key);
					free(temp->value);
					free(temp);
				}
				temp = n;
			}
		}
	}
	if (temp)
	{
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	if (ht->array)
		free(ht->array);
	free(ht);
}
