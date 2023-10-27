#include <stdio.h>
#include "main.h"
/**
 * fun - gets the power
 * @k : number of iterations
 * Return: power of the number
 */
unsigned int fun(unsigned int k)
{
	unsigned int num = 1;

	while (k--)
	{
	num *= 2;
	}
	return (num);
}
/**
 * binary_to_uint - print the binary number
 * @b : string the will be converted
 * Return: returns the unit
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, z, bin;

	if (b == NULL)
	return (0);
	i = z = bin = 0;
	while (b[i])
		i++;
	while (i--)
	{
		switch (b[i])
		{
			case '1':
			bin += fun(z);
			break;
			case '0':
			bin += 0;
			break;
			default:
			return (0);
		}
	z++;
	}
	return (bin);
}
