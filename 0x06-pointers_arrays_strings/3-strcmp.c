#include "main.h"

/**
* _strcmp - compare two strings
*@s1: string one
*@s2: string two
* Return: int
*/

int _strcmp(char *s1, char *s2)
{
	int x, y;

	x = 0, y = 0;
	while (s1[x] != '\0' && s2[x] != '\0' && y == 0)
	{
		y = s1[x] - s2[x];
		x++;
	}
	return (y);
}

