#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer
 * @index: where the new node should be added
 * Return: 0
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *gsw, *new_node;
	unsigned int counter = 1;

	if (!head)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	gsw = *head;
	ptr = (*(head))->next;
	while (ptr)
	{
		if (counter == idx)
		{
			gsw->next = new_node;
			new_node->next = ptr;
			return (new_node);
		}
		gsw = ptr;
		ptr = ptr->next;
		counter++;
	}
	if (counter == idx && !ptr)
	{
		gsw->next = new_node;
		return (new_node);
	}
	free (new_node);
	return (NULL);
}
