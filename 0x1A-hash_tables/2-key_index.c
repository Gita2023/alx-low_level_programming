#include "hash_tables.h"

/**
 * key_index - obtein hash index of a key
 * @key: the key to search
 * @size: the size of table hash
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);

}
