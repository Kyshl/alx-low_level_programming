#include "main.h"
/**
 * set_bit - set bit
 * @n: num
 * @index:thee index
 * Return: 1 if workd or -1 if an error happens
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int u = 1;

	if (index > 64)
		return (-1);

	u = u << index;
	*n = (*n | u);
	return (1);
}
