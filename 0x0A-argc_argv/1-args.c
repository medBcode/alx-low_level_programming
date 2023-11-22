#include <stdio.h>

/**
 * main -  Prints number of arguements
 * @argc: arg count
 * @argv: array of pointers
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	*argv = *argv;
	printf("%d\n", argc - 1);
	return (0);
}

