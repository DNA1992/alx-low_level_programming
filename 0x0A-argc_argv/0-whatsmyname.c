#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*main - print name of this function
*@argc:length ofarguments
*@argv:argument
*Return: 0 if successful
*/

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
