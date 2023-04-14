#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked -  is a function that create memory
 * @b: is an integer
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
