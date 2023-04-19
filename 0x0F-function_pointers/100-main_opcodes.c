#include <stdlib.h>
#include <unistd.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments passed to the program.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(STDERR_FILENO, "Error\n", 6);
		return (1);
	}

	int bytes = atoi(argv[1]);

	if (bytes <= 0)
	{
		write(STDERR_FILENO, "Error\n", 6);
		return (2);
	}

	unsigned char *ptr = (unsigned char *)&main;

	for (int i = 0; i < bytes; i++)
	{
		char hex[2];

		sprintf(hex, "%02x", *(ptr + i));
		write(STDOUT_FILENO, hex, 2);
	}

	write(STDOUT_FILENO, "\n", 1);
	return (0);
}
