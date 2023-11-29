#include "function_pointers.h"

/**
 * int_index - Retrieves the index of a sought integer.
 * @array: Pointer to the input integer array.
 * @size: Size of the array.
 * @cmp: Pointer to the function for value comparison.
 *
 * Return: Index of the first unmatched element by cmp
 * function; -1 if no match found or if size is <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
