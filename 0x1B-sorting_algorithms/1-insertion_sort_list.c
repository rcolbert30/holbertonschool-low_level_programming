#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: list to be sorted
 * Return: None
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL, *new = NULL, *sorted = NULL;

	if (list == NULL)
		return;
	for (new = *list; new; new = new->next)
	{
		for (temp = new->prev; temp; temp = temp->prev)
		{
			if (new->n < temp->n)
			{
				if (new->next)
					new->next->prev = temp;
				temp->next = new->next;
				sorted = temp->prev;
				temp->prev = new;
				new->next = temp;
				new->prev = sorted;
				if (sorted)
					sorted->next = new;
				else
					*list = new;
				temp = temp->prev;
			}
			else
				break;
			print_list(*list);
		}
	}
}
