#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1 : string type
 * @s2 : string type
 * Return: return content of s1 followed by content of s2
 */
char *str_concat(char *s1, char *s2)
{
	int size;
	int sizo1;
	int sizo2;
	int i;
	char *s3;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	sizo1 = sizeOne(s1);
	sizo2 = sizeTwo(s2);
	size = sizo1 + sizo2;
	s3 = malloc(size * sizeof(char));
	if (s3 == NULL)
	{
	return (NULL);
	}

	i = 0;
	while (i < sizo1)
	{
	s3[i] = s1[i];
	}
	while (i < size)
	{
	s3[i] = s1[i - sizo1];
	}
	s3[size] = '\0';

	return (s3);
}
/**
 * sizeOne - calculate the lenght
 * @s1 : string type
 * Return: return the length
 */
int sizeOne(char *s1)
{
	int a;

	for (a = 0; s1[a] != '\0'; a++)
	{

	}
	return (a);
}
/**
 * sizeTwo - calculate the lenght
 * @s2 : string type
 * Return: return the length
 */
int sizeTwo(char *s2)
{
	int b;

	for (b = 0; s2[b] != '\0'; b++)
	{

	}
	return (b);
}
