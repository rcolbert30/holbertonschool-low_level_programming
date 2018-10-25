#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * print_list -prints all the elements of a list
 *@h: pointer to linked list
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		printf("[%d] %s\n", h->len, h->str);
		h  = h->next;
		counter++;
	}
	return (counter);
}

