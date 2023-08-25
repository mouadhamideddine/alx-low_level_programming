#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees nodes
 * @head : head of node
 * Return: None
 */
void free_list(list_t *head)
{
	list_t *saver;
	while (head)
	{
		saver = head->next;
		free(head->str);
		free(head);
		head = saver;
	}
}
