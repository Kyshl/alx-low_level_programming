#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **hii;
	int g, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	hii = malloc(sizeof(int *) * height);

	if (hii == NULL)
		return (NULL);

	for (g = 0; g < height; g++)
	{
		hii[g] = malloc(sizeof(int) * width);

		if (hii[g] == NULL)
		{
			for (; g >= 0; g--)
				free(hii[g]);

			free(hii);
			return (NULL);
		}
	}

	for (g = 0; g < height; g++)
	{
		for (h = 0; h < width; h++)
			hii[g][h] = 0;
	}

	return (hii);
}


