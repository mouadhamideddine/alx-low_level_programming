#include "lists.h"
/**
 * listint_len - returns length of list
 * @h : head node
 * Return: size node
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while(h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
