#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees list sets head to null
 * @head : head of the list
 * Return: None
 */
void free_listint2(listint_t **head)
{
	listint_t *saver;

	if (!*head)
	{
		return;
	}
	while(*head)
	{
		saver = (*head)->next;
		free(*head);
		*head = saver;
	}

}
