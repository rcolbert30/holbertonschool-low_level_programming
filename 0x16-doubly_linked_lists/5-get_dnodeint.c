#include "lists.h"

/**
 * get_dnodeint_at_index - gets nth node of list
 * @head: head
 * @index: index
 * Return: nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
