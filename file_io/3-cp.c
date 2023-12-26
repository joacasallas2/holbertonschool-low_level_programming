#include "main.h"
/**
 * main - program that copies the content of a file to another file.
 * @argc: The number of arguments
 * @argv: The pointer to the array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, closed1, closed2;
	char *buf;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		return ('\0');
	}
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	read(fd1, buf, 1024);
	write(fd2, buf, strlen(buf));
	closed1 = close(fd1);
	if (closed1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	closed2 = close(fd2);
	if (closed2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
