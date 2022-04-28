#include "main.h"

/**
*_puts_recursion - prints the string with recursion
*@s: pointer for character of string
* Return: string
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
