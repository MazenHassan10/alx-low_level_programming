#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print the integer of the lists
 * @h : thhe header of the list
 * Return: return the number of the integers
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *p = h;

	while (p)
	{
		printf("%d", p->n);
		p = p->next;
		i++;
	}
	return (i);
}
