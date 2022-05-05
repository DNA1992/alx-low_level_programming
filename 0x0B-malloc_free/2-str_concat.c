#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - fills memory with constant byte
* @s1:first string
* @s2:second string
* Return:an address
*/

char *str_concat(char *s1, char *s2)
{
	int x, size1, size2;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	s = malloc((sizeof(char) * size1) + (sizeof(char) * size2) + 1);

	if (s == NULL)
		return (NULL);

	for (x = 0; x < (size1 + size2); x++)
	{
		if (x >= size1)
			s[x] = s2[x - size1];
		else
			s[x] = s1[x];
	}
	s[x] = '\0';
	return (s);
}
