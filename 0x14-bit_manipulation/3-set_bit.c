#include "main.h"
/**
*set_bit - fill mem with constant char
*@n:pointer size
*@index:ok
*Return:int 
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (!(*n & (1 << index)))
		*n += 1 << index;
	return (1);
}
