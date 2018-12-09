#include "lists.h"
/**
 * add_dnodeint - adds new node at beginning
 * @head: head of list
 * @n: data
 * Return: address of new element of null if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head;
		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
