#include <stdlib.h>
/**
 * _strdup - is a function that return pointer
 *
 * Return: pointer to the duplicated array
 */
char *_strdup(char *str)
{
	char *dup;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	dup = malloc(sizeof(char) * (i+1));
	if (dup == NULL)
		return (NULL);
	for (r = 0; r < i+1; r++)
	{
		dup[r] = str [r];
	}
	return (dup);
}
