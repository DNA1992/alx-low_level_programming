#include "main.h"

/**
*srt - evaluates square root of numbers
*@x: same value as n
*@y: number that iterates from 1 to n
*Return: 1 on success
*error print -1
*/

int srt(int x, int y)
{
	if (y * y == x)
		return (y);

	if (y * y > x)
		return (-1);
	
	return (srt(x, y + 1));
}

/**
* _sqrt_recursion - returns the square root of natural numbers
*@n: number to evaluate square root
* Return: 0 success
*error -1  for error
*/

int _sqrt_recursion(int n)
{
	return (srt(n, 1));
}

