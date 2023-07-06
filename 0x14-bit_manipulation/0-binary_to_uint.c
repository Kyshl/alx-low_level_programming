#include "main.h"
/**
 * binary_to_uint -converts a binary number to an unsigned int
 * @b: pointer to a strng
 * Return: the converted number,
 * or 0 if thereis 1 0r more chars not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int gty = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		gty = 2 * gty + (b[k] - '0');
	}
	return (gty);
}
