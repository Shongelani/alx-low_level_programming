#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int length = 0;
	int file_descr, byte_write;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[length])
		{
			length++;
		}
	}
	file_descr = open(filename, O_WRONLY | O_APPEND);
	byte_write = write(file_descr, text_content, length);

	if (file_descr == -1 || byte_write == -1)
	{
		return (-1);
	}
	close(file_descr);

	return (1);
}
