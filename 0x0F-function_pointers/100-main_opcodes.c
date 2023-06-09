#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 on success, 1 or 2 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);

	return (0);
}

/**
 * print_opcodes - prints the opcodes of the print_opcodes function
 * @num_bytes: the number of bytes to print
 */
void print_opcodes(int num_bytes)
{
	char *main_ptr = (char *)&main;

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x", (unsigned char)main_ptr[i]);
	}
	printf("\n");
}
