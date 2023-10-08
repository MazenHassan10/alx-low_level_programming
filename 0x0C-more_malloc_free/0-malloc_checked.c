#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b : size of the allocation
 * Return: returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		return (98);
	return (m);
}
