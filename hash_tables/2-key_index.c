#include "hash_tables.h"

/**
 * key_index - Gets the index of a key
 * @key: The key string
 * @size: The size of the array
 *
 * Return: The index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
