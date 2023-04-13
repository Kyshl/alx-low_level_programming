#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _memset -fills memory with a consatnt byte
 * @f: memory area to be filled
 * @e:char to copy
 * @n: number of times to copy e
 * Return:pointer to the memory area f
 */
char *_memset(char *f, char e, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		f[i] = e;
	}
	return (f);
}
/**
 * _calloc -allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
