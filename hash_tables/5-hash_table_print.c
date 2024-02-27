#include "hash_tables.h"
/**
 * hash_table_print -  function that prints a hash table.
 * @ht: The hash table
 *
 * Return: Nothing (void function)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int flag = 0;

	printf("{");
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
			if (flag == 1)
			{
				if (i < ht->size - 1)
				{
					printf(", ");
				}
				else
				{
					printf("\n");
				}
			}
			printf("\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);
			flag = 1;
			if (ht->array[i]->next)
				ht->array[i] = ht->array[i]->next;
			else
				break;
		}
		i++;
	}
	printf("}\n");
}
