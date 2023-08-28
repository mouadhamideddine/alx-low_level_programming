#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - delete head node
 * @head : node
 * Return: Node data
 */
int pop_listint(listint_t **head)
{
	listint_t *saver;
	int v;

	if (!head || !*head)
	{
		return (0);
	}
	v = (*head)->n;
	saver = *head;

	*head = saver->next;
	free(saver);
	return (v);
}
