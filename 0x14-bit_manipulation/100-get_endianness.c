#include "main.h"
/**
 * get_endianness -get endiannes
 * Return: 0 for big endia, 1 if little endia
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
