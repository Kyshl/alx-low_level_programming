#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to first node in listint_t list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t m = 0;
	int k;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		k = *h - (*h)->next;
		if (k > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			m++;
		}
		else
		{
			free(*h);
			*h = NULL;
			m++;
			break;
		}
	}
	*h = NULL;
	return (m);
}
