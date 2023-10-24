#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - add node at the end of the list
 * @head : the header of the list
 * @n : the data we gonna use
 * Return: return the number of the integers
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode = malloc(sizeof(listint_t));
	listint_t *p = *head;

	if (NewNode == NULL)
	{
		return (NULL);
	}
	NewNode->n = n;
	if (p == NULL)
	{
	NewNode->next = *head;
	*head = NewNode;
	}
	else
	{
		while (p->next)
			p = p->next;
		p->next = NewNode;
	}
	return (NewNode);
}
