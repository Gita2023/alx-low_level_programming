#include "lists.h"

/**
 * print_dlistint - prints doubly-linked list.
 * @h: pointer to the head.
 * Return: number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
