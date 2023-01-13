#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 * Description: should print the key/value in the order
 * that they appear in the array of hash table.
 * Order must be: array, list.
 * If ht is NULL, don’t print anything
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	hash_node_t **list, *item;

	i = 0;
	j = 0;
	list = ht->array;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		item = list[i];

		if (item != NULL)
		{
			if (j > 0)
				printf(", ");
			printf("'%s': '%s'", item->key, item->value);

			while (item->next)
			{
				item = item->next;
				if (j > 0)
					printf(", ");
				printf("'%s': '%s'", item->key, item->value);
			}
			j++;
		}
	}
	printf("}\n");
}
