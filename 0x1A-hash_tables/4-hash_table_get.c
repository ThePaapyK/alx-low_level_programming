#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element, \
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n_node;
	unsigned long int index;


	index = key_index((unsigned char *)key, ht->size);
	n_node = ht->array[index];
	if (ht == NULL || key == NULL)
		return (NULL);

	if (n_node == NULL)
		return (NULL);

	if (strcmp(n_node->key, key) == 0)
		return (n_node->value);

	while (strcmp(n_node->key, key) != 0)
	{
		n_node = n_node->next;
	}
	if (strcmp(n_node->key, key) == 0)
		return (n_node->value);
	if (n_node == NULL)
		return (NULL);

	return (NULL);
}
