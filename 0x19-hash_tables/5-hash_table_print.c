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


	if (ht == NULL)
		return;
	putchar('{');
	while (i < ht->size)
	{
			temp = ht->array[i];
			while (temp != NULL)
			{
				if (flag == 1)
					print(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				flag = 1;
				temp = temp->next;
			}
			i++;
		}
	}
	printf("}\n");
}
