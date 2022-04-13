#include "main.h"
/**
* print_last_digit - to print last digit of an integer
*@n - the input integer
* Return: Always 0
*/
int print_last_digit(int n)
{
	if (n > 0)
	{
		return (n % 10);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1 * (n % 10));
	}	
