#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look
 * @key:  is the key you are looking for
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	while (i <= ht->size)
	{
		while (ht->array[i] == NULL)
		{
			i++;
		}
		while (ht->array[i]->key)
		{
			while (ht->array[i] == NULL)
			{
				i++;
			}
			if (strcmp(ht->array[i]->key, key) == 0)
			{
				return (ht->array[i]->value);
			}
			if (ht->array[i]->next)
			{
				ht->array[i] = ht->array[i]->next;
			}
			else
			{
				break;
			}
			i++;
		}
		i++;
		if (i <= ht->size)
		{
			break;
		}
	}
	return (NULL);
}
