#include "main.h"

/**
 * main - Runs a simple UNIX command interpreter.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: The return value of the last executed command.
 */
int main(int argc, char *argv[])
{
	char *prompt = "($) ";
	char *lineptr;
	size_t n = 0;
	ssize_t nchars_read;

	(void) argc;
	(void) argv;

	while (1)
	{
		printf("%s", prompt);
		nchars_read = getline(&lineptr, &n, stdin);

		if (nchars_read == -1)
		{
			printf("Exiting shell....\n");
			return (-1);
		}

		printf("%s\n", lineptr);
	}

	free(lineptr);
	return (0);
}
