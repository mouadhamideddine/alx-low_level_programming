#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int main(void)
{
    list_t *head = NULL;
    
    // Adding nodes to the list
    add_node(&head, "Hello");
    add_node(&head, "World");
    add_node(&head, "!");

    // Printing the list
    print_list(head);

    // Freeing the list
    list_t *current = head;
    while (current != NULL)
    {
        list_t *next = current->next;
        free(current->str);
        free(current);
        current = next;
    }
    
    return 0;
}
