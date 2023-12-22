#include "hash_tables.h"
char* _strdup(const char* source) {
    char* destination = NULL;
    size_t length = 0;

    if (!source) {
        return NULL;
    }

    length = strlen(source);

    destination = malloc(length + 1);
    if (!destination) {
        return NULL;
    }

    strcpy(destination, source);

    return destination;
}
/**
 * add_to_empty_list - adds keyvalue pair to empty list
 * @key: string
 * @value: value
 * @head: linked list in the hashtable
 * Return: pointer success or NULL fail
*/
hash_node_t* add_to_empty_list(const char *key, const char *value, hash_node_t *head)
{
	hash_node_t *current = NULL;

	if (head)
	{
		return (NULL);
	}
	if(!key)
	{
		return (NULL);
	}
	current = malloc(sizeof(hash_node_t*));
	if (!current)
	{
		return (NULL);
	}
	current->key = _strdup(key);
	current->value = _strdup(value);
	current->next = NULL;
	head = current;
	return (head);
}
/**
 * add_collision - adds keyvalue pair a head of list
 * @key: string
 * @value: value
 * @head: linked list in the hashtable
 * Return: pointer success or NULL fail
*/
hash_node_t* add_collision(const char *key, const char *value, hash_node_t *head)
{
	hash_node_t *old_head = NULL;
	hash_node_t *new_head = NULL;

	if (!head)
	{
		/*printf("add_collision !head\n");*/
		return (NULL);
	}
	old_head = head;
	new_head = malloc(sizeof(hash_node_t*));
	if(!new_head)
	{
		return (NULL);
	}
	new_head->key = _strdup(key);
	new_head->value = _strdup(value);
	new_head->next = old_head;
	head = new_head;
	return (head);
}
/**
 * add_to_list - adds keyvalue pair to list
 * @key: string
 * @value: value
 * @head: linked list in the hashtable
 * Return: 1 success or 0 fail
*/
hash_node_t* add_to_list(const char *key, const char *value, hash_node_t *head)
{
	if (!head)
	{
		return (add_to_empty_list(key, value, head));
	}
	return (add_collision(key, value, head));
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

	(void)value;

	if (!ht || !key || key[0] == '\0')
	{
		return(0);
	}
	local_array = ht->array;
	if (!local_array)
	{
		return (0);
	}
	index = key_index((const unsigned char*)key, ht->size);
	/*wanted_list = local_array[index];*/
	local_array[index] = add_to_list(key, value, local_array[index]);
	ht->array = local_array;
	return(1);
}
