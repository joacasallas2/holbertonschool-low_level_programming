#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: file to create
 * @text_content: Content to add into the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t wrote;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	wrote = write(fd, text_content, strlen(text_content));
	if (wrote <= 0 || wrote != strlen(text_content))
	{
		return (-1);
	}
	close(fd);
	return (1);
}
