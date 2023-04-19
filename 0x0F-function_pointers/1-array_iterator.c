#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -an array iterator
 * @array: the array to be used
 * @size: is the size of array
 * @action: pointer to function in need
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (y = 0; y < size; y++)
		action(array[y]);
}
