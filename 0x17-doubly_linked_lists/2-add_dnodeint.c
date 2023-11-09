/**
 * add_dnodeint - function add node at the beginning doubly-linked list.
 * @head: pointer to the first element of the list.
 * @n: add data.
 * Return: address of the new element, or NULL if it failed
 **/
#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	return (NULL);
	new_node->n = n;

	new_node->next = *head;

	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;

	return (new_node);
}
