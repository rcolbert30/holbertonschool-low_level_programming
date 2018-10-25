#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node to the beginning of a list_t list
 * @head: double pointer to head of list
 * @str: str pointer in list
 * Return: 0
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!head)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
