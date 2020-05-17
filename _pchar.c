#include "monty.h"
/**
 * _pchar -  prints the char at the top of the stack
 * @head : the head node
 * @line_number : line number counter
 */
void _pchar(stack_t **head, unsigned int line_number)
{

	if (!*head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (isascii((*head)->n))
		printf("%c\n", (*head)->n);

	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		free(*head);
		exit(EXIT_FAILURE);
	}

}
