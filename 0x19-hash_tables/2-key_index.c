#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: key
 * @size: size
 * Return: index at whcih the key/value pair should be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashIndex = hash_djb2(key);

	return (hashIndex % size);
}
