#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - free all the list
 * @head : the header of the list
 * Return: return nothing
 */
void free_listint(listint_t *head)
{
	listint_t *p = head, *NewP;

	if (head == NULL)
	{
		return;
	}
	while (p)
	{
		NewP = p->next;
		free(p);
		p = NewP;
	}
}
