#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - free the head
 * @head : the header of the list
 * Return: return nothing
 */
int pop_listint(listint_t **head)
{
	listint_t *p;

	if (*head == NULL)
	{
		return (0);
	}
	p = *head;
	*head = (*head)->next;
	p->next = NULL;
	return (p->n);
}
