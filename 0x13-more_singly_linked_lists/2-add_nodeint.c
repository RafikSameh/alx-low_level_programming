#include "main.h"

/**
 * add_nodeint - is a function
 * @h:  is a pointer to pointer
 * @n: is an integer
 *
 * Return: address of the new node or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
