#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - is a function to check the output is negative or positive
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	

	if(n < 0)
	{
		printf ("%d is negative", n);
	}
	else if(n > 0)
	{
		printf ("%d is positive", n);
	}
	else
	{
		printf ("is zero");
	}
	return (0);
}
