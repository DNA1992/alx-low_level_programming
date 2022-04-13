#include"main.h"
/**
* _isalpha - Return 1 checks alphabetic character whether upper or lower case
* @c: compared values
* Return: 0 always
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
