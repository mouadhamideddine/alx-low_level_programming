#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees list sets head to null
 * @head : head of the list
 * Return: None
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!*head)
	{
		return;
	}
	while(*head)
	{
		temp = (*head)->next;
		free(*head);
	*head = temp;
	}
}
