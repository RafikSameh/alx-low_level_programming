#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - is a variadic function
 * @n: is a constant integer
 *
 * Return : 0 (success)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	int sum;
	
	if (n == 0)
		return 0;

	va_start(ptr, n);

	sum = 0;
	for (i = n; i >= 0; i = va_arg(ptr, int))
	{
		sum += *ptr;
	}
	va_end(ptr);
	return sum;
}
