#include "lists.h"
#include <stddef.h>
/**
 * dlistint_len - calculate len of a list
 * @h : head node
 * Return: size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t total_nodes = 0;

	while (current)
	{
		total_nodes++;
		current = current->next;
	}
	return (total_nodes);
}
