#include "main.h"

/**
* _strpbrk- locates a character in a string
* @s:is a pointer type char
* @accept: pointer type char
* Return: number of bytes
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j, num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] != accept[j])
				continue;

			else
			{
				num++;
				break;
			}

		}

		if (num != 0)
			return (s + i);

	}
	return (0);
}
