#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - return index of element if = true, else -1
 * @array: the array used
 * @size: elements size in an array
 * @cmp: pointer to function to be used
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (y = 0; y < size; y++)
	{
		if (cmp(array[y]) != 0)
			return (y);
	}
	return (-1);
}

