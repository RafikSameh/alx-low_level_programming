#include "hash_table.h"
/**
 * hash_table_create - is a function to create ht
 * @size: integer to the size of ht
 * Return: pointer to ht struct
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t) * size);
	if (h->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL
	return (ht);
}
