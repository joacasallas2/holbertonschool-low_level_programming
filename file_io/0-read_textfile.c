#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: The text file
 * @letters: The number of letters it should read and print
 * Return: The number of letters it could read and print
 * if file is NULL or if it fails return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t readed, printed;
	char *buf;

	if (filename == NULL || letters == 0)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	buf = malloc(sizeof(char *) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	readed = read(fd, buf, letters);
	buf[readed] = '\0';
	if (readed == 0)
	{
		return (0);
	}
	printed = write(STDOUT_FILENO, buf, readed);
	close(fd);
	return (printed);
}
