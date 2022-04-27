#include "main.h"

/**
* _strspn - gets the length of prefix substring
*@s: string to use
*@accept: character type
* Return: length of prefix of substring
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, len1 = 0, len2 = 0;

	while (accept[len1] != '\0')
		len1++;
	for (x = 0; s[x] != '\0'; x++)
		for (y = 0; y < len1; y++)
			if (s[x] == accept[y])
				len2++, y = len1;
			else
				if (y == len1 - 1)
					goto exit;
exit: return (len1);
}
