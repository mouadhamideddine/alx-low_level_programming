#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index : as the name suggests
 * @head : list head
 * @idx : index
 * @n : number data for node
 * Return: pointer to the new node or null if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;
	listint_t *saver;

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (!(*head) || idx == 0)
	{
		new_node->next = (*head)->next;
		*head = new_node;
		return(new_node);
	}
	while(current)
	{
		if (count == idx)
		{
			new_node->next = current->next;
			current = new_node;
			return(new_node);
		}
		count++;
		current = current->next;
	}
	free(new_node);
	return (NULL);
}
