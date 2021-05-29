#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: is the key
 * @size: is the size of the array of the hash table
 * Return: the index at which the key pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t hash;

	hash = hash_djb2(key);
	return (hash % size);
}
