#include "holberton.h"
#include <stdio.h>
/**
 * main - prints all the arguments
 * @argc: number of arguments
 * @argv: that hold the arguments
 *
 * Return: returns 0 
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i++ < argc)
		printf("%s\n", *argv++);
	return (0);
}

