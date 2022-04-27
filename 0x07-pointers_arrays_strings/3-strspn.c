#include "main.h"

/**
* _strspn - gets the length of prefix substring
*@s: string to use
*@accept: character type
* Return: length of prefix of substring
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, sublength, length;

	for (sublength = 0; sublength != '\0'; sublength++)
		;

	for (x = 0; s[x] != '\0'; x++)
		for (y = 0; y < sublength; y++)
			if (s[x] == accept[y])
			{
				length;
				y = sublength;
			}
			else
				if (y == sublength - 1)
					goto exit;
exit: return (length);
}


