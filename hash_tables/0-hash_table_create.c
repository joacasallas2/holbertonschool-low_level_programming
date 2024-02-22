#include "hash_tables.h"
/**
 * hash_table_create -  function that creates a hash table.
 * @size: The size of the array
 * Return: a pointer to the newly created hash table
 * or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;

	new_hash_table = malloc(sizeof(new_hash_table));
	if (new_hash_table = NULL)
	{
		return (NULL);
	}
	new_hash_table->size = size;

	return (new_hash_table);
}
