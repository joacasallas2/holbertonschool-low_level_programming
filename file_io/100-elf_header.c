#include <elf.h>
#include "main.h"

/**
 * display_error - print error
 * @message: The error message
 * Return: Nothing
 */

void display_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * display_elf_header - function that displays the information contained
 * in the ELF header at the start of an ELF file
 * @filename: The file
 * Return: Nothing
 */

void display_elf_header(const char *filename)
{
	Elf64_Ehdr elf_header;
	int fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		display_error("Failed to open the file");
	}
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		display_error("Failed to read the ELF header");
	}
	printf("Magic: %02x %02x %02x %02x\n", elf_header.e_ident[EI_MAG0],
	       elf_header.e_ident[EI_MAG1], elf_header.e_ident[EI_MAG2],
	       elf_header.e_ident[EI_MAG3]);

	printf("Class: %d\n", elf_header.e_ident[EI_CLASS]);
	printf("Data: %d\n", elf_header.e_ident[EI_DATA]);
	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header.e_type);
	printf("Entry point address: %lx\n", elf_header.e_entry);

	close(fd);
}

/**
 * main - program that displays the information contained
 * in the ELF header at the start of an ELF file
 * @argc: The number of arguments
 * @argv: The pointer to the array the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}
	display_elf_header(argv[1]);
	return (0);
}
