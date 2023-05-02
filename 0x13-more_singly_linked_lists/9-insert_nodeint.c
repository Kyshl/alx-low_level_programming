#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at given pstn
 * @head: pointer to the first node
 * @idx: list index where the new node shd be added
 * @n: data to insert in the new node
 *
 * Return: pointer to new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *newnd;
	listint_t *temp = *head;

	newnd = malloc(sizeof(listint_t));
	if (!newnd || !head)
		return (NULL);

	newnd->n = n;
	newnd->next = NULL;

	if (idx == 0)
	{
		newnd->next = *head;
		*head = newnd;
		return (newnd);
	}

	for (k = 0; temp && k < idx; k++)
	{
		if (k == idx - 1)
		{
			newnd->next = temp->next;
			temp->next = newnd;
			return (newnd);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
