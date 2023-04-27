#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free list
 * @head:  A pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}


