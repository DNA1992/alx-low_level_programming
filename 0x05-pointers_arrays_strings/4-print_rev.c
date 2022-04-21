#include "main.h"

/**
* print_rev - function to reverse string
*
* @s: string to reverse
* Return: Always 0 success
*/
void print_rev(char *s)
{
	int length, j, i;
	char st, end;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	i = length - 1;
	j = 0;

	while (i > j)
	{
		st = s[j];
		end = s[i];
		s[j] = end;
		s[i] = st;
		i--;
		j++;
	}
}
