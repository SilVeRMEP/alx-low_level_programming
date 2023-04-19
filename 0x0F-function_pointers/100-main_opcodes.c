#include <stdlib.h>
#include "function_pointers.h"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		const char *error_message = "Error\n";

		while (*error_message)
			_putchar(*error_message++);
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		const char *error_message = "Error\n";

		while (*error_message)
			_putchar(*error_message++);
		return (2);
	}

	unsigned char *main_ptr = (unsigned char *)main;

	for (int i = 0; i < num_bytes; i++)
	{
		unsigned char opcode = main_ptr[i];

		_putchar("0123456789abcdef"[opcode / 16]);
		_putchar("0123456789abcdef"[opcode % 16]);
	}
	_putchar('\n');

	return (0);

}
