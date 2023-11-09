#include "lists.h"

/**
 * add_dnodeint - function add node at the beginning doubly-linked list.
 * @head: pointer to the first element of the list.
 * @n: add data.
 * Return: address of the new element, or NULL if it failed
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *way = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (way)
	{
		while (way->next)
			way = way->next;
		new->prev = way;
		way->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
