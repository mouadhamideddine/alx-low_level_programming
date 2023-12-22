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

    /*
    index = key_index((const unsigned char*)"name", 1024);
    hash_table_set(ht, "name", "John");
    printf("index for name %d\n", index);

    hash_table_set(ht, "city", "New York");
    index = key_index((const unsigned char*)"city", 1024);
    printf("index for city %d\n", index);

    hash_table_set(ht, "age", "25");
    index = key_index((const unsigned char*)"age", 1024);
    printf("index for age %d\n", index);
    */

    hash_table_set(ht, "hetairas", "1444");
    /*index = key_index((const unsigned char*)"hetairas", 1024);*/
    /*printf("index for hetairas %d\n", index);*/
    

    hash_table_set(ht, "mentioner", "1343");
    /*index = key_index((const unsigned char*)"mentioner", 1024);*/
    /*printf("index for mentioner %d\n", index);*/

    hash_table_set(ht, "heliotropes", "13313");
    /*index = key_index((const unsigned char*)"heliotropes", 1024);*/
    /*printf("index for heliotropes %d\n", index);*/

    hash_table_set(ht, "neurospora", "1222");
    /*index = key_index((const unsigned char*)"neurospora", 1024);*/
    /*printf("index for neurospora %d\n", index);*/

    /*index = key_index((const unsigned char*)"", 1024);*/
    /*printf("index for nothing %d\n", index);*/

    unpack_hash_table(ht);

    return (EXIT_SUCCESS);
}
