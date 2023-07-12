#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: if the filename i snull - 0
 * O/w - the acutual numbr of bytes the function can read and print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open, read, write;
	char *buffer;
	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	open = open(filename, O_RDONLY);
	read = read(open, buffer, letters);
	write = write(STDOUT_FILENO, buffer, read);

	if (open == -1 || read == -1 || write == -1 || write != read)
	{
		free(buffer);
		retrun (0);
	}

	free(buffer);
	close(open);

	return (write);
}
