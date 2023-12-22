#include "hash_tables.h"
/**
 * check_collision - check for collision
 * @key: string
 * @head: head of linked list in the hashtable
 * Return: 1 for collision or 0 no collision
*/
int check_collision(unsigned const char *key, hash_node_t *head)
{
	hash_node_t *current = NULL, *temp = NULL;
	if(!head)
	{
		return(0);
	}
	current = head;
	while(current)
	{
		if (strcmp(current->key, key) == 0)
		{
			return(1);
		}
		current = current->next;
	}
	return(0);
}
/**
 * add_to_empty_list - adds keyvalue pair to empty list
 * @key: string
 * @value: value
 * @head: linked list in the hashtable
 * Return: pointer success or NULL fail
*/
int add_to_empty_list(unsigned const char *key, const char *value, hash_node_t *head)
{
	hash_node_t *current = NULL;

	if (head)
	{
		printf("add_to_empty_list: error head full\n");
		return (0);
	}
	if(!key)
	{
		printf("add_to_empty_list: !key");
		return (0);
	}
	current = malloc(sizeof(hash_node_t));
	if (!current)
	{
		return (0);
	}
	current->key = strdup(key);
	current->value = strdup(value);
	current->next = NULL;
	head = current;
	return (1);
}
/**
 * add_to_no_empty_list - adds keyvalue pair to non empty list
 * @key: string
 * @value: value
 * @head: linked list in the hashtable
 * Return: pointer success or NULL fail
*/
int add_to_no_empty_list(unsigned const char *key, const char *value, hash_node_t *head)
{
	hash_node_t *current = NULL;
	hash_node_t *previous_node = NULL;

	if (!head)
	{
		printf("add_to_no_empty_list !head\n");
		return (0);
	}
	current = head;
	while(current)
	{
		previous_node = current;
		current = current->next;
	}
	current = malloc(sizeof(hash_node_t));
	if (!current)
	{
		return (0);
	}
	current->key = strdup(key);
	current->value = strdup(value);
	current->next = NULL;
	previous_node->next = current;
	return(1);
}
/**
 * add_collision - adds keyvalue pair a head of list
 * @key: string
 * @value: value
 * @head: linked list in the hashtable
 * Return: pointer success or NULL fail
*/
int add_collision(unsigned const char *key, const char *value, hash_node_t *head)
{
	hash_node_t *old_head = NULL;
	hash_node_t *new_head = NULL;

	if (!head)
	{
		printf("add_collision !head\n");
		return (0);
	}
	old_head = head;
	new_head = malloc(sizeof(hash_node_t));
	if(!new_head)
	{
		return (0);
	}
	new_head->key = strdup(key);
	new_head->value = strdup(value);
	new_head->next = old_head;
	head = new_head;
	return (1);
}
/**
 * add_to_list - adds keyvalue pair to list
 * @key: string
 * @value: value
 * @head: linked list in the hashtable
 * Return: 1 success or 0 fail
*/
int add_to_list(unsigned const char *key, const char *value, hash_node_t *head)
{
	if (!head)
	{
		return (add_to_empty_list(key, value, head));
	}
	if (check_collision(key, head) == 1);
	{
		return (add_collision(key, value, head));
	}
	return (add_to_no_empty_list(key, value, head));
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to update
 * @key: key can not be empty string
 * @value: value associated with the key and can be empty
 * Return: 1 success or 0 fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t **local_array = NULL;
	unsigned long int index;
	unsigned char *_key = NULL;
	hash_node_t *wanted_list = NULL;

	(void)value;

	if (!ht || !key || key[0] == '\0')
	{
		return(0);
	}
	local_array = ht->array;
	printf("array pointer == %p\n", (void*)local_array);
	if (!local_array)
	{
		return (0);
	}
	_key = (unsigned char*)key;
	index = key_index(_key, ht->size);
	wanted_list = local_array[index];
	return(add_to_list(_key, value, wanted_list));
}
