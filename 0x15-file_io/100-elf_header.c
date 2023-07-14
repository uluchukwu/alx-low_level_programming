#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
* print_error_message - Prints error message to stderr and exits
* @message: The error message to be printed
*/

void print_error_message(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: Array containing the command-line arguments
*
* Return: 0 on success, 98 on error
*/

int main(int argc, char *argv[])
{
	/* Check the number of arguments */
	if (argc != 2)
	{
	print_error_message("Invalid number of arguments.
			Usage: elf_header elf_filename");
	}

	/* Open the ELF file */

int fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include 		* Read the ELF header */
        Elf64_Ehdr elf_header;
        ssize_t bytes_read = read(fd, &elf_header, sizeof(elf_header));

        if (bytes_read != sizeof(elf_header))
        {
        print_error_message("Failed to read the ELF header.");
        }

        /* Check if the file is an ELF file */

        if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
        elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
        elf_header.e_ident[EI_MAG3] != ELFMAG3)
        {
        print_error_message("The specified file is not an ELF file.");
        }

        /* Print the ELF header information */

        printf("Magic: %c%c%c%c\n",
        elf_header.e_ident[EI_MAG1],
        elf_header.e_ident[EI_MAG2],
print_error_message("Failed to open the ELF file.");
	}
	/* Read the ELF header */
	Elf64_Ehdr elf_header;
	ssize_t bytes_read = read(fd, &elf_header, sizeof(elf_header));

	if (bytes_read != sizeof(elf_header))
	{
	print_error_message("Failed to read the ELF header.");
	}

	/* Check if the file is an ELF file */

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
	elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
	elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
	elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
	print_error_message("The specified file is not an ELF file.");
	}

	/* Print the ELF header information */

	printf("Magic: %c%c%c%c\n",
	elf_header.e_ident[EI_MAG1],
	elf_header.e_ident[EI_MAG2],
	elf_header.e_ident[EI_MAG3],
	elf_header.e_ident[EI_MAG0]);

	printf("Class: %d-bit\n", elf_header.e_ident[EI_CLASS]
		== ELFCLASS32 ? 32 : 64);

	printf("Data: %s\n", elf_header.e_ident[EI_DATA]
			== ELFDATA2LSB ? "2's complement, little-endian" :
				elf_header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big-endian" :
				"Unknown data encoding");

	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);

	printf("OS/ABI: %s\n", elf_header.e_ident[EI_OSABI]
		== ELFOSABI_SYSV ? "UNIX System V ABI" :
	elf_header.e_ident[EI_OSABI] == ELFOSABI_HPUX ? "HP-UX" :
	elf_header.e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "NetBSD" :
	elf_header.e_ident[EI_OSABI] == ELFOSABI_LINUX ? "Linux" :
	elf_header.e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "Solaris" :
		"Unknown OS/ABI");

	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);

	printf("Type: 0x%04x\n", elf_header.e_type);

	printf("Entry point address: 0x%lx\n", elf_header.e_entry);

		/* Close the file */
		close(fd);

	return (0);
}

