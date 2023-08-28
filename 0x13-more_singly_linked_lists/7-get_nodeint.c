#include "lists.h"
/**
 * get_nodeint_at_index - returns node at index
 * @head : list head
 * @index : number
 * Return: pointer to the indexed node or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}
	if (index == 0)
	{
		return (head);
	}
	while(head)
	{
		if (index == i)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
