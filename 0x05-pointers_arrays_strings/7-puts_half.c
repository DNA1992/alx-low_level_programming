#include "main.h"
/**
* puts_half - prints the other half of string
*
* @str: string to half
*/
void puts_half(char *str)
{
	int i;
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	n = ((str[i] != '\0') - 1 / 2);

	for(i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
