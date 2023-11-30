#include "hash_tables.h"

/**
 * hash_table_print - to print the hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node_table;
	unsigned int aax = 0;
	unsigned int bbx = 0;

	if (ht == NULL)
	{
		return;
	}

	node_table = ht->array[0];
	putchar('{');

	for (aax = 0; aax < ht->size; aax++)
	{
		node_table = ht->array[aax];
		while (node_table)
		{
			if (bbx == 1)
				printf(", ");
			printf("'%s': '%s'", node_table->key, node_table->value);
			bbx = 1;
			node_table = node_table->next;
		}
	}
	putchar('}');
	putchar('\n');
}
