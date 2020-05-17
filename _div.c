#include "monty.h"
/**
 * _div - divides the top element of the second element of the stack
 * @head : the head node
 * @line_number : line number counter
 */
void _div(stack_t **head, unsigned int line_number)
{
	int div;

	if (!*head || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short", line_number);
		free(*head);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero", line_number),
		exit(EXIT_FAILURE);
	}

	div = (*head)->next->n / (*head)->n;
	_pop(&(*head), line_number);
	(*head)->n = div;
}
