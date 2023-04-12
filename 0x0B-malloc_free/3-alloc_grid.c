#include <stdlib.h>
/**
 * alloc_grid - is a function of a loop
 * @width: is integer
 * @height: is integer
 * Return: pointer to 2-D array
 */
int **alloc_grid(int width, int height)
{
	int **x;
	int i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	x = malloc(sizeof(int *) * height);
	if (x == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(int) * width);

		if (mee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mee[x]);

			free(mee);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		x[i] = malloc(sizeof(int) * width);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			x[i][j] = 0;
		}
	}
	return (x);
}
