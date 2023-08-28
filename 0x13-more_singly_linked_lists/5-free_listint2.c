#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees list sets head to null
 * @head : head of the list
 * Return: None
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (!*head)
	{
		return;
	}
	current = *head
	while(current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}
