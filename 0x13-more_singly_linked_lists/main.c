#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;
    listint_t *node;

    // Create a linked list with some values
    add_nodeint(&head, 5);
    add_nodeint(&head, 10);
    add_nodeint(&head, 15);
    add_nodeint(&head, 20);
    add_nodeint(&head, 25);

    // Print the linked list
    printf("Linked List: ");
    print_listint(head);

    // Calculate the sum of the linked list
    int total = sum_listint(head);

    // Print the sum
    printf("Sum of the linked list: %d\n", total);

    // Free the memory allocated for the linked list
    free_listint(head);

    return 0;
}
