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
	fd = open(filename, O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
	{
		return (-1);
	}
	wrote = write(fd, text_content, strlen(text_content));
	if (wrote <= 0)
	{
		write(STDOUT_FILENO, "fails", strlen("fails"));
		return (-1);
	}
	return (1);
}
