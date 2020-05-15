#include "monty.h"
char *data;
/**
 * read_file - read a text file and print it as stdout
 * @file_name : name of the file
 */
void read_file(const char *file_name)
{
	FILE *file;
	char *str = NULL, *token1 = NULL, *token2 = NULL, *delim = "\n ";
	size_t len = 0;
	unsigned int l = 1;
	int get_line;
	stack_t *head = NULL;
	void (*op)(stack_t **, unsigned int);

	file = fopen(file_name, "r");

	for (; (get_line = getline(&str, &len, file)) != -1; l++)
	{
		token1 = strtok(str, delim);
		token2 = strtok(NULL, delim);
		data = token2;

		op = op_code(token1);
		if (!op)
		{
			fprintf(stderr, "L%d: unknown instruction %s", l, token1);
			exit(EXIT_FAILURE);
		}

		op(&head, l);
	}
	fclose(file), free(str), _free(head);
}
