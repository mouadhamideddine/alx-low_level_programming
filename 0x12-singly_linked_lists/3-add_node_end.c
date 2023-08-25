#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - calculate length
 * @str : string
 * Return: size of str
 */
unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
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
	if (*head == NULL)
	{
		current->str = strdup(str);
		current->len = _strlen(str);
		current->next = NULL;
		*head = current;
		return (current);
	}
	else
	{
		while ((*head)->next != NULL)
		{
			*head = (*head)->next;
		}
		current->str = strdup(str);
		current->len = _strlen(str);
		current->next = NULL;
		*head = current;
		return (current);
	}
}
