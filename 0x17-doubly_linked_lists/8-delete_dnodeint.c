#include "lists.h"
#include <stdlib.h>
/**
 * free_first_node - free
 * @head : head node
 * Return: 1  success or -1 fail
 */
int free_first_node(dlistint_t **head)
{
	dlistint_t *next_to_head = NULL;

	if (!head || !(*head))
		return (1);
	next_to_head = (*head)->next;
	if (next_to_head)
	{
		free(*head);
		(*head)->n = next_to_head->n;
		(*head)->prev = NULL;
		(*head)->next = next_to_head->next;
		return (1);
	}
	else
	{
		free(*head);
		*head = NULL;
	}
	return (1);
}
int free_last_node(dlistint_t **last_node)
{
	dlistint_t *prev_node = NULL;

	if (!(*last_node))
		return (1);
	prev_node = (*last_node)->prev;
	free(*last_node);
	*last_node = NULL;
	prev_node->next = NULL;
	return (1);
}
/**
 * dlistint_len - calculate len of a list
 * @h : head node
 * Return: size of the list
 */
unsigned int dlistint_len2(const dlistint_t *h)
{
	const dlistint_t *current = h;
	unsigned int total_nodes = 0;

	while (current)
	{
		total_nodes++;
		current = current->next;
	}
	return (total_nodes);
}
/**
 * get_dnodeint_at_index - gets a node from a tree
 * @head : headnode
 * @index : node index starting from 0
 * Return: pointer to node wanted
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
/**
 * delete_dnodeint_at_index - delete at index
 * @head : head
 * @index : index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int tree_size = dlistint_len2(*head);
	int returns = 0;
	dlistint_t *current = NULL, *next_node = NULL, *prev_node = NULL;

	if ( !head || !(*head) )
	{
		return (1);
	}
	if (index > tree_size)
	{
		return (-1);
	}
	if (index == 0)
	{
		/*printf("index == 0\n");*/
		current = get_dnodeint_at_index(*head, index);
		/*printf("current success");*/
		/*returns = free_first_node(&current);*/
		/*printf("free_fisr success");*/
		return (returns);
	}
	if (index == tree_size)
	{
		/*printf("index == tree_size\n");*/
		current = get_dnodeint_at_index(*head, index);
		returns = (free_last_node(&current));
		return (returns);
	}
	/*printf("inside index\n");*/
	current = get_dnodeint_at_index(*head, index);
	prev_node = current->prev;
	next_node = current->next;
	next_node->prev = prev_node;
	prev_node->next = next_node;
	free (current);
	current = NULL;
	return(1);
}
