#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <elf.h>
#include <sys/types.h>

void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
void print_version(unsigned char *e_ident);
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);

/**
 * print_abi - this function prints the ABI version of the ELF header.
 * @e_ident: the pointer to the array containing the ABI version of the ELF
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                    %d\n",
			e_ident[EI_ABIVERSION]);
}

/**
 * print_osabi - this function prints the OS/ABI of the ELF header.
 * @e_ident: the array containing the ELF version.
 */

void print_osabi(unsigned char *e_ident)
{
	printf("     OS/ABI:                          ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX -HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}
/**
 * print_type - this function prints the type of an ELF header.
 * @e_ident: the array containing the ELF class.
 * @e_type: the ELF type.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_type >>= 8;
	}
	printf("   Type:                       ");

	switch (e_type)
	{
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - this function prints the entry point of the
 * ELF header.
 * @e_ident: the array containing the ELF class.
 * @e_entry: the address of the entry point.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:             ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
	{
		printf("%#lx\n", e_entry);
	}
}

/**
 * close_elf - this function closes an ELF file.
 * @elf: the descriptor of the ELF file.
 *
 * Description: if the ELF file cannot be close, exit code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * print_version - this function prints the version of the ELF header.
 * @e_ident: the array containing the ELF version.
 */
void print_version(unsigned char *e_ident)
{
	printf("    Version:                   %d",
			e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * check_elf - this function checks if a file is an ELF file.
 * @e_ident: the array containing the ELF
 *
 * Description: if the file is not an ELF file, then exit code is 98.
 */
void check_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 && e_ident[i] != 'E'
				&& e_ident[i] != 'L' &&
				e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - this function prints the magic numbers of the ELF header
 * @e_ident: the pointer to the array containing the ELF magic numbers
 * Description: the magic numbers will be displayed with spaces
 * in between.
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:       ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
}

/**
 * print_class - this function prints the class of the ELF header
 * @e_ident: the pointer to the array containing the ELF class.
 */
void print_class(unsigned char *e_ident)
{
	printf("    Class:                   ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASSNONE:
			printf("none\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - this function the data of the ELF header.
 * @e_ident: the array containing the ELF
 */
void print_data(unsigned char *e_ident)
{
	printf("    Data:                ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * main - this main function displays the information or
 * contents of the ELF header, which is at the start of an ELF file.
 * @argv: the array of pointers to the arguments
 * @argc: the number of arguments given to the program.
 * Return: 0 (Success) otherwise exit code 98 if the
 * file is not an ELF file or the function fails.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int f, g;
	Elf64_Ehdr *header;

	g = open(argv[1], O_RDONLY);
	if (g == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(g);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	f = read(g, header, sizeof(Elf64_Ehdr));
	if (f == -1)
	{
		free(header);
		close_elf(g);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);
	free(header);
	close_elf(g);

	return (0);
}
