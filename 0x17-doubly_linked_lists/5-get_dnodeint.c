#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node from a tree
 * @head : headnode
 * @index : node index starting from 0
 * Return: pointer to node wanted
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t current = head;
	unsigned int count = 0;

	while (current)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
