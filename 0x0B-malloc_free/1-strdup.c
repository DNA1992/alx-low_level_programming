#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - fills memory with a constant byte
*@str:size of char
*Return: null if str equals null
* address
*/

char *_strdup(char *str)
{
	int x;
	int size;
	char *s;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	s = malloc((sizeof(char) * size) + 1);

	if (s == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		s[x] = str[x];
	s[x] = '\0';
	return (s);
}
	
