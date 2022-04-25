#include "main.h"

/**
*print_number - print a number using _putchar
*@n: number to be printed
* Return: 0
*/

void print_number(int n)
{
		unsigned int x = 1;

		if (n < 0)
		{
			_putchar('-');
			n *= -1;
		}
		if (n == 0)
			_putchar('0');

		else
		{
			while ((n / x) >= 10)
				x *= 10;
			
			while (x > 0)
			{
				_putchar((n / x) + '0');
				n %= x;
				x /= 10;
			}
		}
}
