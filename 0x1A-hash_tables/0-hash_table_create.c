#include "hash_tables.h"

/**
 * hash_table_create - Create table hash
 * @size: size of table
 *
 * Return: pointer a table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_axis = NULL;

	if (size == 0)
	{
		return (NULL);
	}

	table_axis = malloc(sizeof(hash_table_t));

	if (table_axis == NULL)
	{
		return (NULL);
	}

	table_axis->size = size;

	table_axis->array = malloc(sizeof(hash_node_t *) * size);

	if (table_axis->array == NULL)
	{
		return (NULL);
	}
	return (table_axis);

}
