#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
* _strlen - returns length of a string
* @kd:string
* Return: string length
*/
int _strlen(const char *kd)
{
        int sc = 0;

        while (kd[sc] != '\0')
                sc++;
        return (sc);
}
/**
 * add_node - adds a new node to the beginning of a list_t list
 * @head: double pointer to head of list
 * @str: str pointer in list
 * Return: 0
*/

list_t *add_node_end(list_t **head, const char *str)
{
        list_t *new_node;
	list_t *ptr;

        new_node = malloc(sizeof(list_t));
        if (!new_node)
        {
                return (NULL);
        }
        new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return(NULL);
	}
	new_node->len = _strlen(str);
        if (!*head)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	ptr = *head;
	while (ptr->next)
	{
		ptr = ptr->next;
	}	
	ptr = new_node;
	new_node->next = NULL;
        return (*head);
}
