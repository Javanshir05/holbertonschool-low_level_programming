#include "hash_tables.h"

/**
 * key_index - Returns the index of a key in the hash table array
 * @key: The key to get the index for
 * @size: Size of the hash table array
 *
 * Return: Index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
