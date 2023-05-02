#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of listint_t
 * @head: pointer to the first element
 * @index: index of the node that shdb deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *present = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (k < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		k++;
	}



	present = temp->next;
	temp->next = present->next;
	free(present);

	return (1);
}
