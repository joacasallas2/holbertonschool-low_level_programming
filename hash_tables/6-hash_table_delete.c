#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: It is the hash table
 * Return: Nothing (void function)
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	while (ht)
	{
		while (ht->array[i] == NULL)
		{
			i++;
		}
		if (i >= ht->size)
		{
			break;
		}
		while (ht->array[i])
		{
			temp = ht->array[i];
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			if (ht->array[i]->next)
			{
				ht->array[i] = ht->array[i]->next;
				free(temp);
			}
			else
			{
				free(temp);
				break;
			}
		}
		i++;
	}
	free(ht);
}
