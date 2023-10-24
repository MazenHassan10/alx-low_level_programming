#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get the nth node
 * @head : the header of the list
 * @index : number of the node
 * Return: return nothing
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;
	listint_t *p;

	if (head == NULL)
	{
		return (NULL);
	}
	p = head;
	while (p)
	{
		if (i == index)
		{
			return (p);
		}
		i++;
		p = p->next;
	}
	return (NULL);
}
