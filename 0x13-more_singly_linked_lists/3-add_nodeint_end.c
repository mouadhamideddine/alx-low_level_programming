#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds node to the end of linked list
 * @head : pointer to head of list
 * @n : number
 * Return: pointer to the element or NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = malloc(sizeof(listint_t));
	listint_t *saver = *head;

	if (!current)
	{
		return (NULL);
	}
	current->n = n;
	current->next = NULL;
	if (!(*head))
	{
		*head = current;
		return (current);
	}
	while((saver->next))
	{
		saver = saver->next;
	}
	saver->next = current;
	return (current);
}
