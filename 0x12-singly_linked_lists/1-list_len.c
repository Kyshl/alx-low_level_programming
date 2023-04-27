#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
size_t t = 0;
while (h)
{
t++;
h = h->next;
}
return (t);
}


