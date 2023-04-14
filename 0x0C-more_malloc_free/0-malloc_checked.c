#include <stdlib.h>

/**
 * *malloc_checked - is a function that create memory
 * @b: is number of bytes
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
