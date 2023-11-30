#include "hash_tables.h"

/**
 * hash_table_get - to get the value of key
 * @ht: hash table_aux
 * @key: key string
 * Return: string value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node_table;
	unsigned long int idx;

	if (!ht || strlen(key) == 0)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	node_table = ht->array[idx];

	while (node_table)
	{
		if (strcmp(node_table->key, key) == 0)
			return (node_table->value);
		node_table = node_table->next;
	}
	return (NULL);

}
