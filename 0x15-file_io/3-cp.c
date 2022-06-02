#include "main.h"
/**
*prog_from-fills memory
*@file_from:is a pointer size
*Return:an integer
*/
void prog_from(char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}
/**
*prog_to-fills memory
*@file_to: size of pointer
*Return:integer
*/
void prog_to(char *file_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
}
/**
*prog_fd-fills memory
*@file:pointer size
*Return:integer
*/
void prog_fd(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
	exit(100);
}
/**
*main-fills memory
*@argc:pointer size
*@argv:index
*Return:int
*/
int main(int argc, char argv)
{
	int fde = 0, fdt = 0, rdt = 0, wrt = 0;
	char *file_from, *file_to, buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	fde = open(file_from, O_RDONLY);
	if (fde == -1)
		prog_from(file_from);

	fdt = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdt == -1)
		prog_to(file_to);
	
	for (rdt = read(fde, buffer, 1024); rdt > 0; rdt = read(fdt, buffer, 1024))
	{
		wrt = write(fdt, buffer, rdt);
		if (wrt == -1)
			prog_to(file_to);
	}

	if (rdt == -1)
		prog_from(file_from);

	if (close(fde) == -1)
		prog_fd(file_from);

	if (close(fdt) == -1)
		prog_fd(file_to);

	return (0);
}
