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
	int i = 0;
	char *ch;

	size = _mysize(str);
	if (str == NULL)
	{
	return (0);
	}
	else
	{
	while (i < size)
	{
		if (str[i] == NULL)
		{
			return (NULL);
		}
		ch[i] = str[i];
		i++;
	}
	ch[size] = "/0";

	return (ch);
	}
}
/**
 * _mysize - know the size of string
 * @str : string type
 * Return: the size of the string
 */
int _mysize(char str)
{
	int n;

	for (n = 0 ; str[n] != "/0" ; n++)
	{

	}
	return (n);
}
