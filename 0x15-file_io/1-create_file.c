#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int length = 0;
	int byte_write, file_descr;
	mode_t mode = S_IRUSR | S_IWUSR;

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
	file_descr = open(filename, O_CREAT | O_RDWR | O_TRUNC, mode);
	byte_write = write(file_descr, text_content, length);

	if (file_descr == -1 || byte_write == -1)
	{
		return (-1);
	}
	close(file_descr);

	return (1);
}
