#include "lists.h"
/**
 * add_nodeint - add new node
 * @head: pointer to the first node
 * @n: data to insert in the new node
 *
 * Return: the address of new element or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnd;

	newnd = malloc(sizeof(listint_t));
	if (!newnd)
		return (NULL);

	newnd->n = n;
	newnd->next = *head;
	*head = newnd;

	return (newnd);
}
