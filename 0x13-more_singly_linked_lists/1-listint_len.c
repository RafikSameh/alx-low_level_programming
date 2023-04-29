#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - is a function
 * @h: is a pointer
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}

	return (s);
}
