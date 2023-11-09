/**
 * add_dnodeint - function add node at the beginning doubly-linked list.
 * @head: pointer to the first element of the list.
 * @n: add data.
 * Return: address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *way;

	way = malloc(sizeof(dlistint_t));
	if (way == NULL)
		return (NULL);

	way->n = n;
	way->prev = NULL;
	way->next = *head;
	if (*head)
		(*head)->prev = way;
	*head = way;

	return (way);
}
