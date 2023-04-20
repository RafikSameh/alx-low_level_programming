#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - is a function that print
 * @name: is a pointer to char
 * @f: is a pointer to function that takes array of ch
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
