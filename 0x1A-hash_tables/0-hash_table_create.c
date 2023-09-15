#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: the desired size of the hash table
 *
 * Return: the table as a pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size  == 0)
		return (NULL);
	/**allocate memory for the hashtable structure*/
	table = malloc(sizeof(hash_table_t));
		if (table == NULL)
			return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);
		if (table->array == NULL)
		{
			free(table);
			return (NULL);
		}
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	table->size = size;
	return (table);
}