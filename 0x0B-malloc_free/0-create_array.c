#include <stdlib.h>

/*
 * create array is a function that creates an array and assign a char to its elements
 * return pointer to an array , Null 
 */

char *create_array(unsigned int size, char c)
{
    char* str;
    int i;
    
    str=malloc(size * sizeof(char));
    if(size == 0 || str == NULL)
    {
        return (NULL);
    }
    for(i = 0; i < size; i++)
    {
        str[i] = c;
    }
    return (str);
}
