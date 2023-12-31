#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy the string given
 * @str : charchter type
 * Return: returns a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	int size;
	int i;
	char *ch;

	if (str == NULL)
	{
	return (NULL);
	}

	size = _mysize(str) + 1;
	ch = malloc(size * sizeof(char));

	i = 0;
	while (i < size)
	{
		if (ch == NULL)
		{
			return (NULL);
		}
		ch[i] = str[i];
		i++;
	}

	return (ch);
}
/**
 * _mysize - know the size of string
 * @str : string type
 * Return: the size of the string
 */
int _mysize(char *str)
{
	int n;

	for (n = 0 ; str[n] != '\0'; n++)
	{

	}
	return (n);
}
