#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer to the head of the list
 * @n: data to be added
 *
 * Return: he address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	distint_t *new;

	new = malloc(sizeof(distint_t));
	if (new == NULL)
		return (NULL);
	new->n = = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
