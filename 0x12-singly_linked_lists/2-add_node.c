#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node - adds a new elemnt
 * @head : the header list we gonna use
 * @str : the string we gonna keep
 * Return: the number of lists we have
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p = malloc(sizeof(list_t));

	p->str = strdup(str);
	p->next = head;
	head = p;
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
