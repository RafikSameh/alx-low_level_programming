#include <stdlib.h>

/**
 * *string_nconcat - is a function
 * @s1: is pointer
 * @s2: is pointer
 * @n: is integer
 *
 * Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i, j, x, k;

	if (s1 == NULL)
		*s1 = "";
	if (s2 == NULL)
		*s1 = "";
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	s3 = malloc(i + j + 1);
	if (s3 == NULL)
		return (NULL);
	k = 0;
	while (s1[k] != '\0')
	{
		s3[k] = s1[k];
		k++;
	}
	x = 0;
	while (x < n)
	{
		s3[k] = s[x];
		x++;
		k++;
	}
	return (s3);
}
