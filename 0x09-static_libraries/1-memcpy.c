#include "main.h"

/**
*  _memcpy - copy the input
*@dest: pointer for char
*@src: ponter for char
*@n: number of required bytes
* Return: string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
