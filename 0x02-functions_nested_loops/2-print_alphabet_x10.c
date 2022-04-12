#include"main.h"
/**
*print-alphabetx10 - prints alphabets ten times
*
* Return: Always 0
*/
void print_alphabet_x10(void)
{
	int i;
	int c;


	i = 0;
	c = 'a';

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
	}
	_putchar('\n');
}
