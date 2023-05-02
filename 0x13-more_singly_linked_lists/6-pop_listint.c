#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the head
 * Return: Always 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int k;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	k = temp->n;
	free(temp);
	return (k);
}

