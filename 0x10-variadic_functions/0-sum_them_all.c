#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum inputed numbers
 * @n : number of inputs
 * Return: return the sum
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
	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
