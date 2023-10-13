#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - print strings with seperators
 * @separator : the sep
 * @n : number of arguments
 * Return: the sentence
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

		va_list args;
		char *str;
		unsigned int i;

		if (!n)
		{
			printf("\n");
			return;
		}
		va_start(args, n);

			for (i = 0 ; i < n ; i++)
			{
				if (i == (n - 1))
				{
					printf("%s\n", (str = va_arg(args, char *)) ? str : "(nil)");
				}
				else
				{
	printf("%s", (str = va_arg(args, char *)) ? str : "(nil)");
	printf("%s", separator ? separator : NULL);
				}
			}
		va_end(args);
}
