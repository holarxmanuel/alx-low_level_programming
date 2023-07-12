#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int open, write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		       len++;
	}
	
	open = open(filename, O_CREAT | 0_RDWR | 0_TRUNC, 0600);
	write = write(open, text_conent, len);

	if (open == -1 || write == -1)
		return (1);

	close(open);

	return (1);
}
