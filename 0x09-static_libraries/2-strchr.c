#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates a character in a string
 * @s: pointer char
 * @c: memory area char
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
