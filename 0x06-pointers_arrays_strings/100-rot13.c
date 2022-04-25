#include "main.h"

/**
*rot13 - encoding a string using rot13.
*@s: the string to be encoded to rot13.
*Return: the string s encoded to rot13
*/

char *rot13(char *)
{
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s_rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int x, y;
	
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; letters[y] != '\0'; y++)
		{
			if (s[x] == letters[y])
			{
				s[x] = s_rot13[y];
				break;
			}
		}
	}
	return (s);
}
