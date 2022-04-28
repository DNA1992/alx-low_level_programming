#include "main.h"

/**
* _strlen_recursion - outputs length of string
*@s:string
* Return: string
*/

int _strlen_recursion(char *s)
{
	int length;

	length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		length = 1 + _strlen_recursion(s + 1);
		return (length);
	}
}

