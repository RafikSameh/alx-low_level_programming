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

        len = 0;
        while (*str != '\0')
        {
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
		len++;
		str++;
	}
	_putchar('\n');
}	
