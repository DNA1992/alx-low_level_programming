#include "main.h"
#include <stdio.h>

/**
*print_diagsums - locates a character in a string
*@a: is a pointer type char
*@size: is a variable type size
* Return: Nil
*/

void print_diagsums(int *a, int size)
{
	int x, y = 0, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[y];
		y += size + 1;
	}

	y = 0;

	y = size - 1;


	for (x = 0; x < size; x++)
	{
		sum2 += a[y];
		y += size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}


