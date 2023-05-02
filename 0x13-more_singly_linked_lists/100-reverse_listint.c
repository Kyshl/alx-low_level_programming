#include "lists.h"
/**
 * reverse_listint - reverses listint_t linked list
 * @head: pointer to the first node
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *bef = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = bef;
		bef = *head;
		*head = next;
	}

	*head = bef;

	return (*head);
}
