#include "main.h"

/**
*palindrom1 -set true or false for palindrome string
*@x:string
*@y:length of string
* Return: 1 on success
*error -1 if not thru
*/

int palindrom1(char *x, int y)
{
	if (*x == 0)
		return (y - 1);
	
	return (palindrom1(x + 1, y + 1));
}

/**
*palindrom2 - string reverse
*@x:string
*@y:length of string
* Return: 1 on success
*error -1 if not true
*/

int palindrom2(char *x, int y)
{
	if (*x != *(x + 1))
		return (0);
	
	else if (*x == 0)
		return (1);
	
	return (palindrom2(x + 1, y - 2));
}

/**
* is_palindrome - checks if a string is palindrome
*@s: pointer to string
*Return:on success 1
*error -1
*/

int is_palindrome(char *s)
{
	int y;

	y = palindrom1(s, 0);
	return (palindrom2(s, y));
}
