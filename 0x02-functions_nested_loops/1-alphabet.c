#include"main.h"
/**
* main - print alphabet
*
* Return: nothing, void
*/
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');

	return (0);
}
