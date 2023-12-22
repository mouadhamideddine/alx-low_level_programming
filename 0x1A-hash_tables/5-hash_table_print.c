#include "hash_tables.h"
/**
 * hash_table_print - print a hash_table_t
 * @ht: hash_table_t
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	long unsigned int index = 0;
	int space_token = 1;

	if (!ht)
	{
		return;
	}
	printf("{");
	while (index < ht->size)
	{
		current = ht->array[index];
		while (current)
		{
			if (space_token > 0)
			{
				printf("'%s': '%s'", current->key, current->value);
				space_token = -1;
			}
			else
			{
				printf(", '%s': '%s'", current->key, current->value);
			}
			current = current->next;
		}
		index++;
	}
	printf("}\n");
	return;
}
