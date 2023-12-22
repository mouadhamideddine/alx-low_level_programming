#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key in a hash table
 * @ht: hash table
 * @key: key to search for
 * Return: value associated with the key, or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *current;

    if (!ht || !key || key[0] == '\0')
        return (NULL);

    index = key_index((unsigned char *)key, ht->size);
    current = ht->array[index];

    while (current)
    {
        if (strcmp(current->key, key) == 0)
            return (current->value);

        current = current->next;
    }

    return (NULL); // Key not found
}
#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;
    unsigned long int size = 10; // You can change the size as needed

    ht = malloc(sizeof(hash_table_t));
    if (!ht)
    {
        fprintf(stderr, "Failed to allocate memory for the hash table\n");
        return (EXIT_FAILURE);
    }

    ht->size = size;
    ht->array = malloc(sizeof(hash_node_t *) * size);

    if (!ht->array)
    {
        fprintf(stderr, "Failed to allocate memory for the array\n");
        free(ht);
        return (EXIT_FAILURE);
    }

    // Initialize each element of the array to NULL
    for (unsigned long int i = 0; i < size; i++)
    {
        ht->array[i] = NULL;
    }

    // Test cases
    printf("Adding elements to the hash table:\n");

    printf("Adding key: 'name', value: 'John'\n");
    hash_table_set(ht, "name", "John");

    printf("Adding key: 'age', value: '25'\n");
    hash_table_set(ht, "age", "25");

    printf("Adding key: 'city', value: 'New York'\n");
    hash_table_set(ht, "city", "New York");

    printf("\nRetrieving elements from the hash table:\n");

    printf("Value for key 'name': %s\n", hash_table_get(ht, "name"));
    printf("Value for key 'age': %s\n", hash_table_get(ht, "age"));
    printf("Value for key 'city': %s\n", hash_table_get(ht, "city"));
    printf("Value for key 'nonexistent': %s\n", hash_table_get(ht, "nonexistent"));

    return (EXIT_SUCCESS);
}
