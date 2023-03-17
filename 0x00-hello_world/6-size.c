#include <stdio.h>
/**
 * main - is a function that printf the size of different types Return: 0
 * Return: 0(Success)
 */
int main(void)
{
	long long int c;

	printf("Size of a char: %1u byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %1u byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %1u byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %1u byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %1u byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
