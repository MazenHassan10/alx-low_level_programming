#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - free all the list
 * @head : the header of the list
 * Return: return nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *p, *NewP;

	if (!head)
	{
		return;
	}
	p = *head;

	while (p)
	{
		NewP = p;
		p = p->next;
		free(NewP);
	}
	*head = NULL;
}
