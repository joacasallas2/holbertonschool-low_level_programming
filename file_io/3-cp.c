#include "main.h"
int close_fd(int fd);
/**
 * main - program that copies the content of a file to another file.
 * @argc: The number of arguments
 * @argv: The pointer to the array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, readed;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (argv[1] == NULL || fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd1);
		exit(99);
	}
	while ((readed = read(fd1, buf, 1024)) > 0)
	{
		if (readed != write(fd2, buf, readed))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd1);
			close(fd2);
			exit(99);
		}
	}
	if (readed < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_fd(fd1);
	close_fd(fd2);
	return (0);
}

/**
 * close_fd - function to close file descriptor
 * @fd: file descriptor
 * Return: 0 on success
 */
int close_fd(int fd)
{
	int closed;

	closed = close(fd);
	if (closed < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
