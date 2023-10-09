#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1 : first string
 * @s2 : second string
 * @n : the end
 * Return: return a sentence
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	char *new;
	int o, t, i, j;

	for (o = 0 ; s1[o] != '/0' ; o++)
		;
	for (t = 0 ; s2[t] != '/0' ; t++)
		;
	new = malloc(o + n + 1);
	if (new == NULL)
		return (NULL);

	for (i = 0 ; s1[i] != '\0' ; i++)
		new[i] = s1[i];
	for (j = 0 ; s2[j] != '\0' ; j++)
	{
		new[i] = s2[j];
		i++;
	}
	new[i] = '\0';
	return (new);
}
