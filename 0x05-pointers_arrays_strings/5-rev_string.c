#include "main.h"
/**
* rev_string - to reverse a string
*
* @s: pointer type
*/
void rev_string(char *s)
{
	int p1, p2;
	char str[900];

	p1 = 0;
	while (*s != '\0')
	{
		str[p1] = *s;
		p1++;
		s++;
	}
	s--;

	p2 = 0;
	while (p2 != p1)
	{
		*s = str[p2];
		p2++;
		s--;
	}
	s++;
}
