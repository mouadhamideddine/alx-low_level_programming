#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - adds a node at the beginning
 * @head : pointer to pointer to head node
 * @n : n parametre for dlistint_t node
 * Return: Node or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	ddd_dnodeint.clistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (*head);
}
