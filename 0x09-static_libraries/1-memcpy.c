#include "main.h"
#include <stdio.h>
/**
 * _memcpy - function that copies memory to area
 * @dest: char pointer
 * @src: char memory area
 * @n: char bytes from src to dest
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		dest[z] = src[z];
	}

	return (dest);
}
