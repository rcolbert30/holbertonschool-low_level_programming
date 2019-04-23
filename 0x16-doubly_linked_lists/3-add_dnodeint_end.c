#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of  the list
 * @head: head of the list
 * @n: data
 * Return: address of the new element of NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *end;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	end = *head;

	for (; end->next != NULL;)
	{
		end = end->next;
	}
	end->next = new_node;
	new_node->prev = end;
	return (new_node);
}
