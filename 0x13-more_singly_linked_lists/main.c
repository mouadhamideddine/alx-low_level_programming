#include "lists.h"
#include <stdio.h>
#include <stddef.h>

int main(void)
{
    listint_t *head = NULL;
    listint_t *node = NULL;
    unsigned int index_to_get = 2;

    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 5);

    printf("List elements: ");
    print_listint(head);
    printf("List length: %u\n", (unsigned int)listint_len(head));

    node = get_nodeint_at_index(head, index_to_get);
    if (node)
        printf("Node at index %u: %d\n", index_to_get, node->n);
    else
        printf("Node at index %u does not exist.\n", index_to_get);

    free_listint(head);
    return (0);
}
