#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index of a,
 * linked list.
 * @head: pointer to head of linked list.
 * @index: ndex of the node that should be deleted. Index starts at 0.
 *
 * Return: if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *headx;
	dlistint_t *heady;
	unsigned int count;

	headx = *head;

	if (headx != NULL)
		while (headx->prev != NULL)
			headx = headx->prev;
	count = 0;

	while (headx != NULL)
	{
		if (count == index)
		{
			if (count == 0)
			{
				*head = headx->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				heady->next = headx->next;

				if (headx->next != NULL)
					headx->next->prev = heady;
			}
			free(headx);
			return (1);
		}
		heady = headx;
		headx = headx->next;
		count++;
	}
	return (-1);
}
