#include "main.h"

/**
*string_toupper - converts lowercase of string to uppercase
*@s: converted string
* Return: Converted string
*/

char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 97 && s[x] <= 122)
		{
			s[x] -= 32;
		}
	}
	return (s);
}
