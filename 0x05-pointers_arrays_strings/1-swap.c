#include <main.h>
/**
 *main= is a function
 *return = 0 (success)
 */
void swap_int(int *a, int *b)
{
	int temp ;

	temp = *a;
	*a = *b;
	*b = temp;
}
