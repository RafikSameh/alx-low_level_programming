#include <stdio.h>
#include <stdlib.h>
/**
 * main - it is a function
 * followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
