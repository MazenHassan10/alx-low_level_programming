#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_list - print the whole list
 * @h : the list we gonna use
 * RETURN: the number of lists we have
*/
size_t print_list(const list_t *h)
{
	list_t *p = h;
	int i = 0;

	while (p != NULL)
	{
		if (p->str != NULL)
		{
			printf("[%d] %s\n", p->len, p->str);
		}
		else
		{
			printf("%s\n", "[0] (nil)");
		}
		i++;
		p = p->next;
	}
	return (i);
}
