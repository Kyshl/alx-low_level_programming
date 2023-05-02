#include "lists.h"
/**
 * find_listint_loop - Finds the loop in linked list.
 * @head: head.
 *
 * Return:The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sleep, *awake;

	if (head == NULL || head->next == NULL)
		return (NULL);

	sleep = head->next;
	awake = (head->next)->next;

	while (awake)
	{
		if (sleep == awake)
		{
			sleep = head;

			while (sleep != awake)
			{
				sleep = awake->next;
				awake = awake->next;
			}

			return (sleep);
		}

		sleep = sleep->next;
		awake = (awake->next)->next;
	}

	return (NULL);
}
