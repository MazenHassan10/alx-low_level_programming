#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - allocate space in memory for two dim-array
 * @width : width of array of type int
 * @height : height of array of type int
 * Return: returns a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	int *arr[height][width];

	arr = malloc(width * height * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	int i;

	for (i = 0 ; i < height ; i++)
	{
		for (int z = 0 ; z < width ; z++)
		{
			arr[i][z] = 0;
		}
	}
	return (arr);
}
