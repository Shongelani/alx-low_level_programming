#include "main.h"
/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @filename: name of file
 * Return: newly allocated buffer
 */
char *create_buffer(char *filename)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
 * _close - closes a file
 * @file_descr: file descriptor to close
 * Return: nothing
 */
void _close(int file_descr)
{
	int close_byte = close(file_descr);

	if (close_byte == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descr);
		exit(100);
	}
}
/**
 * main -  copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_byte, write_byte;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	read_byte = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (read_byte == -1 || file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
			free(buffer);
			exit(98);
		}
		write_byte = write(file_to, buffer, read_byte);
		if (write_byte == -1 || file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		read_byte = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	}	while (read_byte > 0);
	free(buffer);
	_close(file_from);
	_close(file_to);
	return (0);
}

