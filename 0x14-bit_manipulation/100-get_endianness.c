#include "main.h"
/**
*get_endianness - fill memory with constant byte
*Return:0
*/
int get_endianness(void)
{
	int col = 256;
	char *row = (char *) &col;

	if (*(row + 2) > *(row + 3))
		return (0);
	return (1);
}
