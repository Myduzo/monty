#include "monty.h"
/**
 * main - main program
 * @argc : number of arguments
 * @argv : argument command
 * Return: data
 */
int main(int argc, char **argv)
{

	if (argc != 2)
		fprintf(stderr, "USAGE: monty file\n"),
		exit(EXIT_FAILURE);
	
	read_file(argv[1]);

	return (0);
}
