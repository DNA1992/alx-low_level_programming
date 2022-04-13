#include "main.h"
/**
* print_last_digit - to print last digit of an integer
*@n: the input integer
* Return: Always 0
*/
int print_last_digit(int n)
{
	int finalDigit;

	if (n >= 0)
	{
		finalDigit = (n % 10);
		_putchar(finalDigit + '0');
		return (finalDigit);
	}
	else
	{
		finalDigit = (-1 * (n % 10));
		_putchar(finalDigit + '0');
		return (finalDigit);
	}
}
