#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @head: double pointer
 * @n: const int
 * Return: address of the new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *Node;
	listint_t *ptr;

	Node = malloc(sizeof(listint_t));
	if (!Node)
	{
		return (NULL);
	}
	Node->n = n;
	Node->next = NULL;
	if (!*head)
	{
		*head = Node;
		return (Node);
	}
	ptr = *head;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = Node;
	return (Node);
}
