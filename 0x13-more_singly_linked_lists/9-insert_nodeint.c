#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - put node in a specific index
 * @head : the header of the list
 * @idx : number of the node
 * @n : our data
 * Return: return nothing
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *p;
	listint_t *Node = malloc(sizeof(listint_t));

	Node->n = n;
	p = *head;

	if (*head == NULL)
	{
		return (NULL);
	}

	if (Node == NULL)
	{
		return (NULL);
	}

	while (p)
	{
		if ((i + 1) == idx)
		{
			Node->next = p->next;
			p->next = Node;
		}
		i++;
		p = p->next;
	}
	return (NULL);
}
