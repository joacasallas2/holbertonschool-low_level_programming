#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key / it can not be an empty string
 * @value: is the value associated with the key. / value must be duplicated
 * Return: 1 if it succeeded, 0 otherwise
 * in case of collision, add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_value;
	unsigned long int index;
	hash_node_t *new_node;
	const unsigned char *new_key;

	new_key = (const unsigned char *)key;

	if (new_key == NULL)
	{
		return (0);
	}
	hash_value = hash_djb2(new_key);
	index = hash_value % ht->size;
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = (char *)new_key;
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		return (0);
	}
	if (ht->array[index] != NULL)
	{

		new_node->next = ht->array[index];
	}
	ht->array[index] = new_node;
	return (1);
}
