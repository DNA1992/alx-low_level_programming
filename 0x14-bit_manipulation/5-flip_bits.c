#include "main.h"
/**
*flip_bits - fill memory with constant char
*@n:pointer size
*@m:index
*Return: integer
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x;

	x = 0;

	if (!(n == m))
	{
		while (!(n == m))
		{
			if (n == 0 && m == 0)
				break;
			if (!((n & 1) == (m & 1)))
				x += 1;
			n >>= 1;
			m >>= 1;
		}
	}
	return (x);
}
