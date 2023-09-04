#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints it to the POSIX
 * standard output.
 * @filename: name of the file
 * @letters: letters to be read and printed
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_descr;
	ssize_t byte_read;
	ssize_t byte_write;

	file_descr = open(filename, O_RDONLY);
	if (file_descr == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	byte_read = read(file_descr, buffer, letters);
	byte_write = write(STDOUT_FILENO, buffer, byte_read);

	free(buffer);
	close(file_descr);
	return (byte_write);
}
