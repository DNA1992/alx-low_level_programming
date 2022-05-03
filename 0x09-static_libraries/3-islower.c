#include"main.h"
/**
* _islower - prints and checks if letter is a lowercase
*@c: contains compared values
* Return: 0 Always
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
