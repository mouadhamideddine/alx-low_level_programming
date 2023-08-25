#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints the nodes
 * @h : pointer to a list_t structure (assuming the head)
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if(current->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		count++;
		current = current->next;
	return (count);
}
