#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_list - print the whole list
 * @h : the list we gonna use
 * Return: the number of lists we have
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("%s\n", "[0] (nil)");
		}
		i++;
		h = h->next;
	}
	return (i);
}
