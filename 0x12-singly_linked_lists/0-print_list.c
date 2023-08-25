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
	size_t count = 0;

	while (h)
	{
		if(!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
