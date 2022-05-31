#include "main.h"
/**
*get_bit - program to get bit value at any interval
*@n:size of pointer
*@index: there
*Return: integer
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return (((n) & ((1) << (index))) ? 1 : 0);
}
