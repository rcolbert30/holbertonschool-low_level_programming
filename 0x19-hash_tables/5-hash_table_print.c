#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 * Return: none
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i;

	putchar('{');
	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
