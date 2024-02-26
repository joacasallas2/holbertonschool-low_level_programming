#include "hash_tables.h"
/**
 * hash_table_print -  function that prints a hash table.
 * @ht: The hash table
 *
 * Return: Nothing (void function)
 */
void hash_table_print(const hash_table_t *ht)
{
	int i = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (ht->array[i] == NULL)
	{
		i++;
		continue;
	}
	while (ht->array[i])
	{
		printf("%s:%s\n", ht->array[i]->key, ht->array[i]->value);
		if (ht->array[i]->next)
		{
			ht->array[i] = ht->array[i]->next;
		}
		i++;
	}
	printf("}\n");
}
