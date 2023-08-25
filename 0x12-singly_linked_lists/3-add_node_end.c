#include "main.h"
/**
 * add_node_end - adds a new node to the end
 * @head : head of the node
 * @str : string
 * Return: Pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = malloc(sizeof(list_t));

	if (current == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
