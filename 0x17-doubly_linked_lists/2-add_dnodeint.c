#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - adds a node at the beginning
 * @head : pointer to pointer to head node
 * @n : n parametre for dlistint_t node
 * Returns: Node or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	//printf("here\n");
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if(*head)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	//new_node->next = malloc(sizeof(dlistint_t));
	//printf("here\n");
	//new_node->n = n;
	//printf("new_node->n n=%d\n",new_node->n);
	//new_node->next = *head;
	//printf("new_node->next%p\n",new_node->next);
	//new_node->prev = NULL;
	//printf("new_node->prev");
	//(*head)->prev = new_node;
	//printf("(*head)->prev = new_node;");
	//*head = new_node;
	return (*head);
}
