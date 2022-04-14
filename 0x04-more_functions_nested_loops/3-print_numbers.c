#include "main.h"

/**
* print_numbers - entry point
*
* Description: prints number with _putchar
*@number: input character
* Return: void
*/
void print_numbers(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
