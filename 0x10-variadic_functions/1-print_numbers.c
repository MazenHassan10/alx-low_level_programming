#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers with seperators
 * @separator : the sep
 * @n : number of arguments
 * Return: the sentence
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

		va_list args;
		unsigned int i;

		va_start(args, n);

		if (separator != NULL)
		{
			for (i = 0 ; i < n ; i++)
			{
				if (i == (n - 1))
				{
					printf("%d\n", va_arg(args, int));
				}
				else
				{
					printf("%d%s", va_arg(args, int), separator);
				}
			}
		}
		else
		{
			for (i = 0 ; i < n ; i++)
			{
				if (i == (n - 1))
				{
					printf("%d\n", va_arg(args, int));
				}
				else
				{
					printf("%d", va_arg(args, int));
				}
			}
		}
		va_end(args);
}
