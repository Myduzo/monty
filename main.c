#include "monty.h"
/**
 * main - main program
 * @argc : number of arguments
 * @argv : argument command
 * Return: data
 */
int main(int argc, char **argv)
{
	FILE *file;

	if (argc != 2)
		fprintf(stderr, "USAGE: monty file\n"),
		exit(EXIT_FAILURE);

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]),
		exit(EXIT_FAILURE);
	}
	fclose(file);
	read_file(argv[1]);

	return (0);
}
