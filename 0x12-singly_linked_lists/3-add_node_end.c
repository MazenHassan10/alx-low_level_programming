#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * strlength - get the length of the string
 * @h : the actual length
 * Return: the length of the string
 */
int strlength(const char *h)
{
		int i = 0;

		while (h[i] != '\0')
		{
		i++;
		}
		return (i);
}
/**
 * add_node_end - adds a new elemnt at the end
 * @head : the header list we gonna use
 * @str : the string we gonna keep
 * Return: the address of list of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
		list_t *p = malloc(sizeof(list_t));

		if (p == NULL)
		{
			return (NULL);
		}
		if (*head == NULL)
		{
			*head = p;
			p->next = NULL;
			return (p);
		}
		list_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		p->str = strdup(str);
		p->len = strlength(str);
		last->next = p;
		return (p);
}
