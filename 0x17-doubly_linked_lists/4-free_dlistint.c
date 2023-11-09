#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the first element of the list.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *act_node;
	dlistint_t *next_node;

	if (head)
	{
		act_node = head;
		next_node = head->next;
		while (next_node)
		{
			free(act_node);
			act_node = next_node;
			next_node = next_node->next;
		}
		free(act_node);
	}
}
