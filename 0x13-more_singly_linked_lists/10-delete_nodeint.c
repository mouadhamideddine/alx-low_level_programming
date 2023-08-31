#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - as the suggests
 * @head : head of the list
 * @index : index
 * Return: 1 success -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *after_node = NULL;
	listint_t *current = *head;
	listint_t *before_node = NULL;

	if (!*head)
	{
		return(-1);
	}
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return(1);
	}
	while (current)
	{
		if (count == index - 1)
		{
			before_node = current;
			current = current->next;
			after_node = current->next;
			before_node->next = after_node;
			free(current);
			return(1);
		}
		count++;
		current = current->next;
	}
	return(-1);
}
