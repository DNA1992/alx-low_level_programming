#include"main.h"
/**
* main - print alphabet
*
* Return: nothing, void
*/
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
