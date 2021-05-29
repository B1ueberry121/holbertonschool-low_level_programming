#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the hash table you want to add or update the key
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if its succeded or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t idx;
	hash_node_t *node = NULL, *change_node;

	if (strcmp(key, "") == 0)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	change_node = ht->array[idx];

	while (change_node && strcmp(key, change_node->key) != 0)
	{
		change_node = change_node->next;
	}

	if (change_node)
	{
		free(change_node->value);
		change_node->value = strdup(value);
	}
	else
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = ht->array[idx];
		ht->array[idx] = node;
	}
	return (1);
}
