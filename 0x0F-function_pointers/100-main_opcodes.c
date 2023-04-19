#include <stdlib.h>
#include <string.h>

void print_opcodes(int num_bytes);

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		exit(1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		exit(2);
	}

	print_opcodes(num_bytes);

	return (0);
}

void print_opcodes(int num_bytes)
{
	unsigned char *opcodes = (unsigned char *) malloc(num_bytes);

	memset(opcodes, 0, num_bytes);

	for (int i = 0; i < num_bytes; i++)
	{
		opcodes[i] = ((unsigned char *) print_opcodes)[i];
	}

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x", opcodes[i]);
	}

	printf("\n");
	free(opcodes);
	exit(0);
}
