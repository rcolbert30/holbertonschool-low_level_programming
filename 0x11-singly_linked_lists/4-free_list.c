#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* free_list - frees a linked list
* @head: first node
* Return: 0
*/
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		head = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = head;
	}
}
