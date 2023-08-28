#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints list
 * @h : head of linked list
 * Return: list size
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
	{
		printf("0");
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
