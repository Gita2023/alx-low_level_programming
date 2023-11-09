#include "lists.h"

/**
 * add_dnodeint - function add node at the beginning doubly-linked list.
 * @head: pointer to the first element of the list.
 * @n: add data.
 * Return: address of the new element, or NULL if it failed
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *way;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	way = *head;

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (way->next)
			way = way->next;
		/* change the next of way node */
		way->next = new_node;
	}
	new_node->prev = way;

	return (new_node);
}
