#include "monty.h"
/**
 * _mod - computes the rest of the division of 2nd and 1st element
 * @head : the head node
 * @line_number : line number counter
 */
void _mod(stack_t **head, unsigned int line_number)
{
	int mod;

	if (!*head || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		free(*head);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number),
		exit(EXIT_FAILURE);
	}

	mod = (*head)->next->n % (*head)->n;
	_pop(&(*head), line_number);
	(*head)->n = mod;
}
