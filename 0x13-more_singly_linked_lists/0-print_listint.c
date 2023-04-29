#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - is a function
 * @h: is a pointer too listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int s = 0;

	while (!h)
	{
		printf("%d", head->n);
		s++;
	}

	return (s);
}
