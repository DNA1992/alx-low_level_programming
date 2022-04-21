#include "main.h"
#include <stdio.h>
/**
* print_rev - function to reverse string
*
* @s: string to reverse
* Return: Always 0 success
*/
void print_rev(char *s)
{
	int length;

	for (length = 0; *s != '\0'; length++)
	{
		s++;
	}
	s--;

	for (length = length; length != 0; length--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

