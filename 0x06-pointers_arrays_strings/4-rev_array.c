#include "main.h"

/**
* reverse_array - reverses an array of number
*@a:array
*@n:number
*/

void reverse_array(int *a, int n)
{
	int x, y, z;

	for (x = 0, y = n - 1; x < n / 2; x++)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
		y--;
	}
}
