#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all -  print all given numbers
 * @format: const char
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list lst;
	char *check;

	i = 0, va_start(lst, format);
	while (format[i])
		{
		switch (format && format[i])
			{
				case 'i':
					printf("%d", va_arg(lst, int));
				break;
				case 'f':
					printf("%f", va_arg(lst, double));
				break;
				case 's':
				{
					check = va_arg(lst, char *);
					if (check == NULL)
					check = "(nil)";
					printf("%s", check);
						break;
				}
				case 'c':
					printf("%c", va_arg(lst, int));
				break;
			}
	while (format[i] == 'i' ||
	(format[i] == 'c' ||
	(format[i] == 's' || format[i] == 'f')))
	{
		if (!(format[i + 1] == '\0'))
			printf(", ");
			break;
	}
		i++;
	}
	printf("\n"), va_end(lst);
}
