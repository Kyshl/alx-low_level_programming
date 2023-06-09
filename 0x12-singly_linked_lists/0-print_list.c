#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints linked list elements
 * @h: name of list
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	int t = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		t++;
		h = h->next;
	}
	return (t);
}
