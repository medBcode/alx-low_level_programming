#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 * @c: for checked.
 * Return: 1 if char is Upper , 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

