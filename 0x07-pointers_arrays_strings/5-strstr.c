#include "main.h"

/**
* _strstr - locates string
*@haystack: is a pointer char
*@needle: is a pointer type char
* Return: The number of bytes repeated
*/

char *_strstr(char *haystack, char *needle)
{
	int x, y = 0, z;

	for (z = 0; needle[z] != '\0'; z++)
		;

	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == needle[0])
		{
			y++;
			haystack++;
			for (x = 1; x < z, x++; haystack++)
			{
				if (*haystack == needle[x])
					y++;

				else
				{
					haystack--;
					y = 0;
					break;
				}

			}
		}
		if (y == z)
			break;

	}
	if (y == z)
		return (haystack - z);
	else
		return (0);
}
