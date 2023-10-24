#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - get the sum of all the data
 * @head : the header of the list
 * Return: return list sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	listint_t *p = head;

	while (p)
	{
		sum = sum + p->n;
		p = p->next;
	}
	return (sum);
}
