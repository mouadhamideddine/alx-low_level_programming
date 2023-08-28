#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees list
 * @head : head of the list
 * Return: None
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	if (!head)
	{
		return;
	}
	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
