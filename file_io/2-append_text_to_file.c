#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t wrote;

	if (!filename)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd < 0)
	{
		return (-1);
	}
	wrote = write(fd, text_content, strlen(text_content));
	if (wrote != strlen(text_content) || wrote == '\0')
	{
		return (-1);
	}
	close(fd);
	return (1);
}
