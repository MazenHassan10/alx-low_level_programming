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
	listint_t *p, *Node = malloc(sizeof(listint_t));

	if (Node == NULL)
	{
		free(Node);
		return (NULL);
	}
	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	Node->n = n;
	Node->next = NULL;
	p = *head;
	i = 0;
	while (p)
	{
		if (!idx)
		{
			Node->next = *head;
			*head = Node;
			return (Node);
		}
		if (i == idx - 1)
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
