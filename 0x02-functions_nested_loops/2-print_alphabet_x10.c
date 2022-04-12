#include"main.h"
/**
*print-alphabetx10 - prints alphabets ten times
*
* Return: Always 0
*/
void print_alphabet_x10(void)
{
	char i;
	char c;

	i = 48;
	c = 'a';

	while (i < 57)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
		_putchar('\n');
	}
}
