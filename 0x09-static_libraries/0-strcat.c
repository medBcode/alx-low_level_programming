#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @src: string to apend to @dest , source
 * @dest: string char
 * Return: a pointer of the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dl = 0;

	while (dest[i++])
		dl++;
	for (i = 0; src[i]; i++)
		dest[dl++] = src[i];
	return (dest);
}
