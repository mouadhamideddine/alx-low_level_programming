#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t node1, node2, node3;
    node1.n = 1;
    node1.next = &node2;
    node2.n = 2;
    node2.next = &node3;
    node3.n = 3;
    node3.next = NULL;

    size_t length = listint_len(&node1);
    printf("Length of the list: %zu\n", length);

    return 0;
}
