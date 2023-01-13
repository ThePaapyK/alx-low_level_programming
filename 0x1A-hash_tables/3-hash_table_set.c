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
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *node = create_node(key, value);
	hash_node_t *cur_node = ht->array[index];

	if (node == NULL)
		return (0);
	if (ht == NULL || key == NULL || value == NULL)
		return (0);


	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}

	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			if (strcmp(ht->array[index]->value, value) == 0)
				return (1);
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		ht->array[index] = ht->array[index]->next;
	}
	if (ht->array[index] == NULL)
	{
		cur_node = node;
		if (cur_node == NULL)
			return (0);
		cur_node->next = ht->array[index];
		ht->array[index] = cur_node;
		return (1);
	}
	return (0);
}
