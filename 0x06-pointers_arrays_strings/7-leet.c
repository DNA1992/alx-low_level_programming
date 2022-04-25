#include "main.h"

/**
* leet - encodes string into 1337
*@s:string to encode
* Return: encoded string
*/

char *leet(char *s)
{
	int x, y;
	char leet[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; leet[y] != '\0'; y++)
		{
			if (s[x] == leet[y])
			{
				s[x] = num[j];
			}
		}
	}

	return (s);
}
