#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*main- program to get the product of the first two integers
*@argc:Number of arguments
*@argv:Argument to output
*Return: 0 on success
*/

int main(int argc, char **argv)
{
	int x, y;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		y = 1;

		x = 1;
		while (x < 3)
		{
			y *= atoi(*argv);
			argv++;
			x++;
		}
		printf("%d\n", y);
	}
	return (0);
}

