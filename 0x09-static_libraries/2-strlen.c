#include "main.h"

/**
* _strlen - calculate the length of a string
*
* @s: the string to calculate its length
* Return: length of string
*/
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
