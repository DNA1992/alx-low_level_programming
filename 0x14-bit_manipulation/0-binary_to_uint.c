#include "main.h"
/**
*binary_to_unit -fills memory with constant byte
*@b:size of pointer
*Return:size of unsigned character
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int x, y, conv = 1; dig =0;

	if (b = NULL)
		return(0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != 1 + '0' && b[x] != 0 + '0')
			return(0);
	}
	for (y = 0; x > y; y++)
	{
		dig += (b[(x - 1) - y] - '0') * conv;
		conv *= 2;
	}
	return (dig);
}
