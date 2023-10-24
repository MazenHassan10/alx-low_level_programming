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
	listint_t *p = *head;
	int k = p->n;

	if (*head == NULL)
	{
		return (0);
	}
	*head = (*head)->next;
	p->next = NULL;
	return (k);
}
