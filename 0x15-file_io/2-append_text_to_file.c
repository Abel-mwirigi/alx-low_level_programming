#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename:name of the file
 * @text_content:string to add
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	ssize_t written_bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		written_bytes = write(fd, text_content, len);
		if (written_bytes == -1 || (int)written_bytes != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
