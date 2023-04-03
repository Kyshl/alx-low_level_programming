#include "main.h"
/**
 * _strpbrk -The  Entry point
 * @s:this is input
 * @accept:this is input
 * Return:0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int m;

		while (*s)
		{
			for (m  = 0; accept[m]; m++)
			{
			if (*s == accept[m])
			return (s);
			}
		s++;
		}

	return ('\0');
}

