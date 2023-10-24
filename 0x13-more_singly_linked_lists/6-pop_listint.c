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

	if (*head == NULL)
	{
		return (0);
	}
	k = (*head)->n;
	*head = (*head)->next;
	return (k);
}
