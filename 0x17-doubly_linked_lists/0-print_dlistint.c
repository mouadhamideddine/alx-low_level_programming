#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - prints a linked list
 * @h : head node
 * Return: Total number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t total_nodes = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		total_nodes++;
	}

	return (total_nodes);
}
