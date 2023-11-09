#include "lists.h"

/**
 * get_dnodeint_at_index - function that gets nth node of a dlistint_t linked list.
 * @head: pointer to the head of list.
 * @index: postion of nth node.
 * Return: if the node doesn't exist, returns NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	x = 0;

	if (!head)
		return (NULL);

	while (head != NULL)
	{
		/* initialize search here */
		if (x == index)
			break;
		x++;
		head = head->next;
	}
	return (head);
}
