#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hast table
 * Return: none
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;

	if (ht == NULL)
		return;

	for(index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			while (ht->array[index])
			{
				free(ht->array[index]->key);
				free(ht->array[index]->value);
				ht->array[index] = ht->array[index]->next;
				free(ht->array[index]);
			}
		}
	}
	free(ht->array);
	free(ht);
}
