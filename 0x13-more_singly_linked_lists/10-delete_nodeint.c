#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete node in a specific index
 * @head : the header of the list
 * @index : number of the node
 * Return: return nothing
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *p, *dod;

	if (*head == NULL)
	{
		return (0);
	}
	p = *head;
	i = 0;
	while (p)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			p->next = NULL;
			free(p);
			return (1);
		}
		if ((i + 1) == index)
		{
			dod = p->next;
			p->next = p->next->next;
			dod->next = NULL;
			free(dod);
			return (1);
		}
		i++;
		p = p->next;
	}
	return (0);
}
