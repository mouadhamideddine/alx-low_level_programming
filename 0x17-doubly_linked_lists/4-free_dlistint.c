#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - frees a node tree
 * @head : head node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	
	while(head)
	{
		temp = head->next ;
		free(head);
		head = temp;
	}
}
