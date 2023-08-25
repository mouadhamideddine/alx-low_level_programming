#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - calculate len of a str
 * @str : string
 * Return : unsigned int
 */
unsigned int _strlen(const char *str)
{
    unsigned int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}
/**
 * add_node - at the head
 * @head : pointer to a pointer of head node
 * @str : str to be added
 * Return: pointer to a list_t struct specifically head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *working_var = malloc(sizeof(list_t));
	if (working_var == NULL)
	{
		return(NULL);
	}
	working_var->str = strdup(str);
	working_var->len = _strlen(str);
	working_var->next = *head;
	*head = working_var;
	return (working_var);
}
