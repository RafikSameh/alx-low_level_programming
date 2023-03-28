#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int len;
	int i;
	char temp;

        len = 0;
	i=0;
        while (*s != '\0')
        {
                len++;
                s++;
        }
	for (i = len-1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
}	
