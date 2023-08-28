#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning
 * @h : pointer to a pointer to a listint_t struct represent head
 * @n : number
 * Return: Pointer to a listint_t struct (new head)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current = malloc(sizeof(listint_t));
	if (!current)
	{
		return (NULL);
	}
	current->n = n;
	current->next = *head;
	*head = current;
	return (current);
}
