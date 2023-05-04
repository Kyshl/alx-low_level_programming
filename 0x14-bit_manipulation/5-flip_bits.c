#include "main.h"
/**
 * flip_bits - returns no.of bits would ned to flip
 * to get from one no 2 another
 * @n: param
 * @m: where to
 * Return: nflips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, fud = 0;

	for (xor = n ^ m; xor > 0; xor >>= 1)
	{
		fud += (xor & 1);
	}

	return (fud);
}
