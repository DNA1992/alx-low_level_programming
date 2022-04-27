#include "main.h"

/**
*_strpbrk- locates a character in a string
*@s:is a pointer type char
*@accept: pointer type char
* Return: number of bytes
*/

char *_strpbrk(char *s, char *accept)
{
	int x, y, z;
	z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (s[x] != accept[y])
				continue;

			else
			{
				z++;
				break;
			}

		}

		if (z != 0)
			return (s + x);

	}
	return (0);
}
