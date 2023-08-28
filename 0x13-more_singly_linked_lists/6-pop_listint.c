#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - delete head node
 * @head : node
 * return: Node data
 */
int pop_listint(listint_t **head)
{
	listint_t *saver = *head;
	int v = 0;

	free(*head);
	v = saver->n;
	return (v);
}
