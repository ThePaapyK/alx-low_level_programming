#include "hash_tables.h"

/**
 * key_index - generates the index at which the key/value pair \
 * should be stored in the array of the hash table
 * @key: The key
 * @size: the size of the array of the hash table
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2((unsigned char *)key);
	unsigned long int index = hash % size;

	return (index);
}
