#include "main.h"

/**
* factorial - gets the factorial of any number
*@n:the type integer
* Return: 1 success
* error -1 is returned
*/

int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}

