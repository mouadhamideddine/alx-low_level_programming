#include "hash_tables.h"
/**
 * key_index - produces index where to store a key
 * @key: str to store
 * @size: size of the hashtable array
 * Return: unsigned long int: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
