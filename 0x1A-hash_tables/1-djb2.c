#include "hash_tables.h"

/**
 * hash_djb2 - hash function
 * @str: string to get hash value in array
 * return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int d;

	hash = 5381;
	while ((d = *str++))
	{
		hash = ((hash << 5) + hash) + d; /* hash * 33 + d */
	}
	return (hash);
}
