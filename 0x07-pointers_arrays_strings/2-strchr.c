#include "main.h"

/**
* _strchr - locates a character in a string
*@s:pointer for char
*@c:variable type
* Return: string
*/

char *_strchr(char *s, char c)
{
	unsigned int x;

	for (x = 0; s[x] != c && s[x] != '\0'; x++)
	;

		if (s[x] != c)
		{
			return (0);
		}
		else
		{
			s += x;
		}


	return (s);
}
