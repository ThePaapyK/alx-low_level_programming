#include "hash_tables.h"
/**
 * create_node - creates the node to be added to the hash table
 * @key: key
 * @value: value to be added
 * Return: node created
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);
	node->key = malloc(strlen(key));
	if (node->key == NULL)
		return (NULL);
	node->value = malloc(strlen(value));
	if (node->value == NULL)
		return (NULL);

	strcpy(node->key, key);
	strcpy(node->value, value);
	return (node);
}

/**
 * hash_table_set - adds an element to a hash table
 * @ht: the hash table
 * @key: the key. It cannot be an empty string
 * @value: value associated with the key
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;

	hash_table_t *table = ht;
	unsigned long int index = key_index((unsigned char *)key, table->size);
	hash_node_t *node = create_node(key, value);
	hash_node_t *cur_node = table->array[index];

	if (node == NULL)
		return (0);

	if (cur_node == NULL)
	{
		table->array[index] = node;
	}
	else
	{
		tmp = table->array[index]->next;
		table->array[index]->next = node;
		if (tmp)
			node->next = tmp;
		else
			node->next = NULL;
	}
	return (1);
}
