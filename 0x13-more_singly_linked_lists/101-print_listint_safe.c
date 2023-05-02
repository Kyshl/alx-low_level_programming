#include "lists.h"
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - no.of unique nodes
 * in looped listint_t linked list.
 * @head:  head of the listint_t.
 *
 * Return: If the list is not looped - 0.
 * or - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *ky, *li;
	size_t nds = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	ky = head->next;
	li = (head->next)->next;

	while (li)
	{
		if (ky == li)
		{
			ky = head;
			while (ky != li)
			{
				nds++;
				ky = ky->next;
				li = li->next;
			}

			ky = ky->next;
			while (ky != li)
			{
				nds++;
				ky = ky->next;
			}

			return (nds);
		}

		ky = ky->next;
		li = (li->next)->next;
	}

	return (0);
}
/**
 * print_listint_safe -prints a listint_t linked list safely
 * @head: head
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nds, i = 0;

	nds = looped_listint_len(head);

	if (nds == 0)
	{
		for (; head != NULL; nds++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nds; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nds);
}
