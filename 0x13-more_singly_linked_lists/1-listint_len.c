#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - print the length of the list
 * @h : thhe header of the list
 * Return: return list length
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *p = h;

	while (p)
	{
		p = p->next;
		i++;
	}
	return (i);
}
