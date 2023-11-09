#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len2 - calculate len of a list
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
 * insert_dnodeint_at_index - as the name suggests
 * @h : head node
 * @idx : index at which node created
 * @n : number for the parametre dlistint_t->n
 * Return: pointer to dlistint_t struct or NULL if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int tree_size = 0;
	dlistint_t *current = NULL, *prev_node = NULL, *new_node = NULL;

	tree_size = dlistint_len2(*h);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == tree_size)
		return (add_dnodeint_end(h, n));
	if (idx > tree_size)
		return (NULL);
	current = get_dnodeint_at_index(*h, idx);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	prev_node = current->prev;
	new_node->next = current;
	new_node->n = n;
	new_node->prev = prev_node;
	prev_node->next = new_node;
	current->prev = new_node;
	return (new_node);
}
