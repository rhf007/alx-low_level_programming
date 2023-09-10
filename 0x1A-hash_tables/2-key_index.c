#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: the key to have an index for
 * @size: size of the array of the hash table
 * Return:  index at which the key/value pair should be stored in the array of
 * the hash table
 * this is where we actually use the djb2 hashing function
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
