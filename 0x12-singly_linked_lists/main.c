#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    list_t *node1, *node2, *node3;
    size_t count;

    node1 = malloc(sizeof(list_t));
    node2 = malloc(sizeof(list_t));
    node3 = malloc(sizeof(list_t));

    node1->str = "Hello";
    node1->len = 5;
    node1->next = node2;

    node2->str = "World";
    node2->len = 5;
    node2->next = node3;

    node3->str = "!";
    node3->len = 1;
    node3->next = NULL;

    printf("Linked List:\n");
    count = print_list(node1);
    printf("Number of nodes: %lu\n", (unsigned long)count);

    free(node1);
    free(node2);
    free(node3);

    return 0;
}
