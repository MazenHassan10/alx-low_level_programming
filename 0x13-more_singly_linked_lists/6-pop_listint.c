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
	int k;
	listint_t *p;

	if (*head == NULL)
	{
		return (0);
	}
	p = (*head)->next;
	k = (*head)->n;
	free(*head);
	*head = p;
	return (k);
}
