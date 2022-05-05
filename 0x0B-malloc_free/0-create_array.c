#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_char - creates an array of characaters, init with specific char
*@size: size of array
*@c:character to initialize with
*Return: address
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int x;

	s = malloc(sizeof(char) * size);

	if (size == 0 || !s)
		return (NULL);

	else
	{
		for (x = 0; x < size; x++)
			s[x] = c;
	}
	return (s);
}

