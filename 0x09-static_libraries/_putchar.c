#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: char to be written
 * Return: success 1 ,error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

