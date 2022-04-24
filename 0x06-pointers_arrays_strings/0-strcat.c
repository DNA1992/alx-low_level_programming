#include "main.h"
/**
* _strcat - function to concatnate two strings
*@dest: pointer for firs string
*@src: pointer for second string
* Return: concatenated string
*/
char *_strcat(char *dest, char *src)
{
	int n, m;

	for (n = 0; dest[n] != '\0'; n++)
	{
		dest++;
	}
	for (m = 0; src[m] !='\0'; m++)
	{
		dest[n] = src[m];
		dest++;
	}
	dest[n] = '\0';
	dest -= (i + j);
	return (dest);
}
