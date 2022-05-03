#include "main.h"

/**
* _memset -fills memory with constant byte
*@s: pointer to input string
*@b: pointer for type char
*@n: constant for int type
* Return: string
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
