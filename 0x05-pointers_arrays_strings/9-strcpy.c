#include "main.h"
/**
*_strcpy - copies the string pointed to by src, including \0.
*@src: pointer.
*@dest: pointer.
*Return: the pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}

	dest[i++] = *src;

	return (dest);
}
