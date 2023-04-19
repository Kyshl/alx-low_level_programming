#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - return a pointer
 * @s: operator passed
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};

	int y = 0;

	while (op_s[y].op)
	{
		if (*(op_s[y].op) == *s)
			return (op_s[y].f);
		y++;
	}
	return (NULL);
}

