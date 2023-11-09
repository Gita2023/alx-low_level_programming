/**
 * print_dlistint - prints doubly-linked list.
 * @h: pointer to the head.
 * Return: number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	/* while we have a pointer to the list */
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
