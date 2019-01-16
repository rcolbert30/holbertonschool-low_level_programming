#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hast table
 * Return: none
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	putchar('{');
	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			while (ht->array[i] != NULL)
			{
				if (ht->array[i] != NULL)
					printf("'%s': '%s',", ht->array[i]->key, ht->array[i]->value);
					printf(", ");
				ht->array[i] = ht->array[i]->next;
			}
		}
	}
	printf("}\n");
}
