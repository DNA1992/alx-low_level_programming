#include "main.h"
/**
*clear_bit - program to clear bit of number to zero
*@n:pointer size
*@index:index
*Return:integer
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
