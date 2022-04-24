#include "main.h"

/**
* _strcat - function to concatnate two strings
*@dest: pointer for firs string
*@src: pointer for second string
* Return: concatenated string
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
