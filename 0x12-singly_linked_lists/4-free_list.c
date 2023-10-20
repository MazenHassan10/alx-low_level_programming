#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_list - free the list
 * @head : the first list we gonna use
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *node, *new_node;

	node = head;
	if (!head)
		return;
	while (node)
	{
		new_node = node->next;
		free(node->str);
		free(node);
		node = new_node;
	}
}
