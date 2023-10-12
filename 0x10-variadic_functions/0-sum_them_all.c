#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum inputed numbers
 * @n : number of inputs
 * RETURNS: return the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	va_list args;
	int i, sum;

	va_start(args, n);

	sum = 0;
	for (i = 0 ; i < (n - 1) ; i++)
	{
		sum += va_arg(args, n);
	}
	va_end(args);
	return (sum);
}
