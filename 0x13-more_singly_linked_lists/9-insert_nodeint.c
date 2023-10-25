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
	unsigned int i;
	listint_t *p;
	listint_t *Node = malloc(sizeof(listint_t));

	if (Node == NULL)
	{
		free(Node);
		return (NULL);
	}
	if (*head == NULL)
	{
		return (NULL);
	}
	Node->n = n;
	p = *head;
	i = 0;
	while (p)
	{
		if (idx == 0)
		{
			*head = Node;
			return (Node);
		}
		if ((i + 1) == idx)
		{
			Node->next = p->next;
			p->next = Node;
			return (Node);
		}
		i++;
		p = p->next;
	}
	free(Node);
	return (NULL);
}
