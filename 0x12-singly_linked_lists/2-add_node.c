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
		i++;
	return (i);
}
/**
 * add_node - adds a new elemnt
 * @head : the header list we gonna use
 * @str : the string we gonna keep
 * Return: the number of lists we have
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p = malloc(sizeof(list_t));

	if (p == NULL)
	{
	return (NULL);
	}
	p->str = strdup(str);
	p->len = strlength(str);
	p->next = *head;
	*head = p;
	return (p);
}
