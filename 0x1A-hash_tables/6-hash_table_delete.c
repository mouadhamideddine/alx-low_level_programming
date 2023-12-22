#include "hash_tables.h"
/**
 * free_list - frees a hash_node_t list
 * @head: head of the list
 * Return: Nothing
 */
void free_list(hash_node_t *head)
{
	hash_node_t *current = NULL;
	hash_node_t *temp = NULL;

	if (!head)
	{
		return;
	}
	current = head;
	while (current)
	{
		temp = current->next;
		free(current->key);
		free(current->value);
		free(current);
		current = temp;
	}
	return;
}
/**
 * hash_table_delete - frees a hash_table_t
 * @ht: hashtable
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;


	if (!ht)
	{
		return;
	}
	while (index < ht->size)
	{
		free_list(ht->array[index]);
		ht->array[index] = NULL;
		index++;
	}
	free(ht->array);
	free(ht);
}
