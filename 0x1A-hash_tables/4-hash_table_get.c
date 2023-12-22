#include "hash_tables.h"
/**
 * hash_table_get - gets a key for hash table ht
 * @ht: hash table
 * @key: key to look for
 * Return: the value associated or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current = NULL;

	if (!key || !ht)
	{
		return (NULL);
	}
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(key, current->key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
