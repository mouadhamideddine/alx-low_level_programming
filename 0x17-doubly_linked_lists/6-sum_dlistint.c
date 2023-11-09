#include "lists.h"
/**
 * sum_dlistint - sum of all n in dlistint
 * @head : headnode
 * Return: sum of all data(n) or 0 if list empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;
	int sum = 0;

	if (!head)
		return (sum);

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
