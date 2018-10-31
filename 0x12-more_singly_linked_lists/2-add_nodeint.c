#include "lists.h"

/**
 * add_nodeint - adds a newnode at the beginning of a listint_t
 * @head: double pointer
 * @n: const int
 * Return: address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Node;

	if (!head)
	{
		return (NULL);
	}
	Node = malloc(sizeof(listint_t));
	if (!Node)
	{
		return (NULL);
	}
	Node->n = n;
	Node->next = *head;
	*head = Node;
	return (Node);
}
