#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - returns pointer to 2 D array of numbers
*@width:the width of the matrix
*@height:the height of the matrix
*/

int **alloc_grid(int width, int height)
{
	int x, y;
	int **s;

	if ((height == 1 && width == 1) || width <= 0 || height <= 0)
		return (NULL);

	s = malloc(height * sizeof(int **));
	
	if (!s)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		s[x] = malloc(width * sizeof(int));
		
		if (!s[x])
		{
			for (x = x - 1; x >= 0; x--)
			{
				free(s[x]);
			}

			free(s);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			s[x][y] = 0;
	}
	return (s);
}

