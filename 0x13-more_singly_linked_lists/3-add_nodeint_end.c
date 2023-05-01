#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of list
 * @head: pointer to the first element in list
 * @n: data to insert in the new element
 *
 * Return:the address of the new element,or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnd;
	listint_t *temp = *head;

	newnd = malloc(sizeof(listint_t));
	if (!newnd)
		return (NULL);
	newnd->n = n;
	newnd->next = NULL;

	if (*head == NULL)
	{
		*head = newnd;
		return (newnd);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newnd;

	return (newnd);
}
