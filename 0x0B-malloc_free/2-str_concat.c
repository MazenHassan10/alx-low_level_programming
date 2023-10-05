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
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	sizo1 = sizeOne(s1);
	sizo2 = sizeTwo(s2);
	size = sizo1 + sizo2 + 1;
	s3 = malloc(size * sizeof(char));
	if (s3 == NULL)
	{
	return (NULL);
	}
	_strncat(s3, s1, sizo1);
	_strncat(s3, s2, sizo2);

	return (s3);
}
/**
 * sizeOne - calculate the lenght
 * @s1 : string type
 * Return: return the lengthه
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
/**
 * _strncat - function to concatnate strings with n bytes
 *
 * @dest: destination for concatnation
 * @src: source of string
 * @n: int type for size of byte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, a;

	dest_len = sizeOne(dest);
	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[dest_len + a] = src[a];
	return (dest);
}
