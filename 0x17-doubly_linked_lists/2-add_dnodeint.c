#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * add_dnodeint - adds a node at the beginning
 * @head : pointer to pointer to head node
 * @n : n parametre for dlistint_t node
 * Returns: Node or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
