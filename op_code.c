#include "monty.h"
/**
 * op_code - search and select the function needed
 * @op : operator
 * Return: NULL
 */
void (*op_code(char *op))(stack_t **, unsigned int)
{
	int x = 0;

	instruction_t inst[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{NULL, NULL}
	};

	for (; inst[x].opcode; x++)
	{
		if (strcmp(inst[x].opcode, op) == 0)
			return (inst[x].f);
	}
	return (NULL);
}
