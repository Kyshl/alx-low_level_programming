#include "main.h"
/**
 * clear_bit - sets the value of bit ata given index to 0.
 * @n: pointer.
 * @index: the index 
 *
 * Return: -1 if wrkd 0r 1 if an error hits.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
