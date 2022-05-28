#include "main.h"
#include <stdio.h>

/**
*main - prints the number of arguments input
*@argc: length of argument
*@argv: second argument
*Return: 0 on success
*/

int main(int argc, char **argv)
{
	if (**argv != '\0')
		printf("%d\n", argc - 1);

	return(0);
}
