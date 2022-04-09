#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
*main - main block
*prints alphabet in lower case followed by UPPERCASE
*Return: Always 0 (Success)
*/
int main(void)
{
	char lowerCase;
	char upperCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		putchar(lowerCase);

	for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
		putchar(upperCase);

	putchar('\n');

	return (0);
}
