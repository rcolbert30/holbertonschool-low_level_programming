#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 * Return: none
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	int flag = 0;
	unsigned long int i = 0;


	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}
