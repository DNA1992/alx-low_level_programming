#include"main.h"
/**
*print-alphabetx10 - prints alphabets ten times
*
* Return: Always 0
*/
void print_alphabet_x10(void)
{
	int number;
	char letter;

	number = 0;

	while (number < 10)
	{
		letter = 'a';

		while (c <= 'z')
		{
			_putchar(letter);
			letter++
		}
		number++;
		_putchar('\n');
	}
}
