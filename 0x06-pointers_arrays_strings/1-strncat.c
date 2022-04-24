#include "main.h"

/**
* _strncat - concatinate 2 strings.
*@dest: first string.
*@src: second string.
*@n: number of bytes
* Return: Always 0.
*/

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0' && n > y)
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	if (n > 0)
	{
		dest[x] = '\0';
	}
	return (dest);
}
