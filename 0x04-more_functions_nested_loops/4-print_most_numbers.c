#include "main.h"
/**
* print_most_numbers - print other numbers aside 2 and 4
*@numbers: return type
* Return: Always 0
*/
void print_most_numbers(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		if (numbers != 2 && numbers != 4)
		{
			_putchar(numbers);
		}
	}
	_putchar('\n');
}
