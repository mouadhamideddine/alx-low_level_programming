#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees list
 * @head : head of the list
 * Return: None
 */
void free_listint(listint_t *head)
{
	free(head);
}
