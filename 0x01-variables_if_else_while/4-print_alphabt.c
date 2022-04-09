#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
*main - prints all alphabets except e and q
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char alphaBt;

	for (alphaBt = 'a'; alphaBt <= 'z'; alphaBt++)
		if (alphaBt != 'e' && alphaBt != 'q')
			putchar(alphaBt);

	putchar('\n');

	return (0);
}
