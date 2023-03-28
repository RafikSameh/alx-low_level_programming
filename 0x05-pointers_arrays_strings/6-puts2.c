#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int len;
	int i;

        len = 0;
        while (*s != '\0')
        {
		if (len % 2 == 0)
		{
			_putchar(s[len]);
		}
		len++;
		s++;
	}
	_putchar('\n');
}	
