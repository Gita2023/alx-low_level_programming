#include "lists.h"

/**
 * print_dlistint - prints doubly-linked list.
 * @h: pointer to the head.
 * Return: number of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t x = 0;

	while (node)
	{
		printf("%i\n", node->n);
		x++;
		node = node->next;
	}

	return (x);
}
