#include "main.h"
/**
 * get_bit - returns thi value of a bit at a given index
 * @n: decimal parameter
 * @index: the index
 * Return: valueu of bit at index index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bt;

	bt = (n >> index);
	if (index > 32)
	return (-1);
	return (bt & 1);
}
