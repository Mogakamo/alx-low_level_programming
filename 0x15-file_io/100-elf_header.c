#define _POSIX_C_SOURCE 200809L
#include <elf.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_error - function that exits the program
 * @argv: argument
 * Return: void
 */

void read_error(char *argv)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
	exit(98);
}
/**
 * check_elf - function that checks the format of the file, prints magic num
 * @header: pointer to the ELF header struct
 * Return: void
 */
void check_elf(Elf64_Ehdr *header)
{
	int i = 0;

	if (header->e_ident[EI_MAG0] == 0x7f &&
	    header->e_ident[EI_MAG1] == 'E' &&
	    header->e_ident[EI_MAG2] == 'L' &&
	    header->e_ident[EI_MAG3] == 'F')
	{
		printf("ELF Header:\n");
		printf("  Magic:  ");

		for (i = 0; i < 16; i++)
			printf(" %02x", header->e_ident[i]);
		printf("\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Format error, not an ELF\n");
		exit(98);
	}
}

/**
 * check_class - function that checks the class of ELF format of the file
 * @header: pointer to the ELF header struct
 * Return: void
 */
void check_class(Elf64_Ehdr *header)
{
	if (header->e_ident[EI_CLASS] == ELFCLASS32)
		printf("  Class:                             ELF32\n");
	if (header->e_ident[EI_CLASS] == ELFCLASS64)
		printf("  Class:                             ELF64\n");
}

/**
 * check_data_ver - function that checks the data and version of ELF
