#include "lists.h"
/**
 * sum_listint - sum all n in list
 * @head : head of the list
 * Return: Total
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
