#include "hash_tables.h"
/**
 * hash_table_create - allocates memory for hash table and returns it
 * @size: size of the hash table
 * Return: hash_table_t pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	hash_node_t **_array = NULL;

	table = malloc(sizeof(hash_table_t));
	if (!table)
	{
		/*printf("table error\n");*/
		return (NULL);
	}
	table->size = size;
	_array = malloc(sizeof(hash_node_t) * size);
	table->array = _array;
	if (!_array)
	{
		/*printf("table - > array error\n");*/
		return (NULL);
	}
	/*printf("array pointer = %p\n", (void*)(table->array));*/
	return (table);
}
