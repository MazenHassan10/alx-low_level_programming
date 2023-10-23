#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - add node at the beggining of the list
 * @head : the header of the list
 * @n : the data we gonna use
 * Return: return the number of the integers
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int i = 0;
	listint_t *NewNode = malloc(sizeof(listint_t));

	if (NewNode == NULL)
	{
		return (NULL);
	}
	NewNode->n = n;

	if (head == NULL)
	{
		*head = NewNode;
		NewNode->next = NULL;
	}
	else
	{
		NewNode->next = *head;
		*head = NewNode;
	}
	return (NewNode);
}
