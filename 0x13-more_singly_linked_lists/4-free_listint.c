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
	while (head)
	{
		free(head->n);
		free(head);
		head = head->next;
	}
}
