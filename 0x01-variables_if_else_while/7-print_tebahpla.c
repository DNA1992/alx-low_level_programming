#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
*main - prints alphabets in reverse from z to a
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char tebahPla;

	for (tebahPla = 'z'; tebahPla >= 'a'; tebahPla--)
		putchar(tebahPla);

	putchar('\n');

	return (0);
}
