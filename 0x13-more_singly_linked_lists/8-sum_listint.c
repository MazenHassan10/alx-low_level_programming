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
	if (!head)
	{
		return (0);
	}
	int sum;
	listint_t *p = head;

	sum = 0;

	while (p)
	{
		sum = sum + p->n;
		p = p->next;
	}
	return (sum);
}
