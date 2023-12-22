#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

void unpack_hash_table(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *current = NULL;
    if (ht == NULL || ht->array == NULL)
    {
        printf("Invalid hash table.\n");
        return;
    }

    printf("Unpacking Hash Table:\n");
    printf("Size: %lu\n", ht->size);

    for (i = 0; i < ht->size; ++i)
    {
        if (ht->array[i] != NULL)
        {
            current = ht->array[i];

            printf("\nBucket %lu:\n", i);

            while (current != NULL)
            {
                printf("  Key: %s, Value: %s\n", current->key, current->value);
                current = current->next;
            }
        }
    }
}

/**
 * hash_table_get - retrieves a value associated with a key in a hash table
 * @ht: hash table
 * @key: key to search for
 * Return: value associated with the key, or NULL if key is not found
 */

void unpackStructs(hash_node_t *head)
{
    hash_node_t *current = head;

    while (current != NULL)
    {
        printf("Key: %s, Value: %s\n", current->key, current->value);
        current = current->next;
    }
}
#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_print(ht);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}

