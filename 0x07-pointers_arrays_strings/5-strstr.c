#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *j = needle;

		while (*m == *j && *j != '\0')
		{
			m++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}

	return (0);
}


