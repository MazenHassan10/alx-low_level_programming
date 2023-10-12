#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints the dog info
 * @d : the struct
 * RETURN: no return
 */
void print_dog(struct dog *d)
{
	char so[] = "(nil)";

	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: %s\n", so);
		}
		if (d->age != 0)
		{
			printf("Age: %.6f\n", d->age);
		}
		else
		{
			printf("Age: %s\n", so);
		}
		if (d->owner != NULL)
		{
			printf("Owner: %s", d->owner);
		}
		else
		{
			printf("Owner: %s", so);
		}
	}
}
