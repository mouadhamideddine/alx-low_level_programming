#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * traverse_to_end - traverses a linked list to it's end
 * @head : headnode
 * Return: adress of the element before null
 */
dlistint_t *traverse_to_end(dlistint_t **head)
{
	dlistint_t *current = *head;
	dlistint_t *prev = NULL;

	while (current)
	{
		prev = current;
		current = current->next;
	}
	return (prev);
}
/**
 * add_dnodeint_end - adds a new node at the end
 * @head : headnode
 * @n : number for node to add
 * Return: adress of the new element or NULL if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *previous_node = NULL, *new_node = NULL;

	previous_node = traverse_to_end(head);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	if (!previous_node)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		/*print_dlistint(new_node);*/
		return (new_node);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = previous_node;
	previous_node->next = new_node;
	/*print_dlistint(previous_node);*/
	return (new_node);
}
