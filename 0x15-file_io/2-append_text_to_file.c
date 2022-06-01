#include "main.h"
/**
*append_text_to_file-append text to file
*@filename: filename
*@text_content: content of the text
*Return: 1 on success, -1 on error
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length] != '\0'; length++)
		;
		wr = write(fd, text_content, length);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
