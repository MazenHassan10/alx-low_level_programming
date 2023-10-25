#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - print the length of the list
 * @h : thhe header of the list
 * Return: return list length
 */
unsigned int listint_length(const listint_t *h)
{
	int i = 0;
	const listint_t *p = h;

	while (p)
	{
		p = p->next;
		i++;
	}
	return (i);
}
/**
 * insert_nodeint_at_index - put node in a specific index
 * @head : the header of the list
 * @idx : number of the node
 * @n : our data
 * Return: return nothing
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, k;
	listint_t *Node = malloc(sizeof(listint_t)), *p = *head;

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
	i = 0;
	k = listint_length(*head);
	if (idx < k || (idx == 0 && k == 0))
	{
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
	}
	free(Node);
	return (NULL);
}
