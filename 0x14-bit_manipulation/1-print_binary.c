#include "main.h"
/**
*print_binary-prints binary of a given number
*@n: number to convert
*Return: nil
*/
unsigned int binary_to_uint(const char *b)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
