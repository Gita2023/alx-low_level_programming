/**
 * print_dlistint - prints doubly-linked list.
 * @h: pointer to the head.
 * Return: number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t x = 0;

	while (node)
	{
		x++;
		node = node->next;
	}

	return (x);
}
