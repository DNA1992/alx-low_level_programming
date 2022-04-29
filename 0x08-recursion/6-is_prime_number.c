#include "main.h"

/**
* primeNum - determines a prime number
*@x:same as n
*@y:natural number
* Return: 1 on success
*error gives 0
*/

int primeNum(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (primeNum(x, y + 1));
}

/**
* is_prime_number - checks prime number
*@n:natural number
* Return: 1 success
* error -1
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (primeNum(n, 2));
}
