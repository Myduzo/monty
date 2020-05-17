#include "monty.h"
/**
 * _pchar -  prints the char at the top of the stack
 * @head : the head node
 * @line_number : line number counter
 */
void _pchar(stack_t **head, unsigned int line_number)
{
	int n = (*head)->n;

	if (!*head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		free(*head);
		exit(EXIT_FAILURE);
	}

	if ((n >= 65 && n <= 90) || (n >= 97 && n <= 122))
	{
		printf("%c\n", (*head)->n);
	}

	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		free(*head);
		exit(EXIT_FAILURE);
	}

}
