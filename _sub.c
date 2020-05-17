#include "monty.h"
/**
 * _sub - subtracts the top element from the second top element of the stack
 * @head : the head node
 * @line_number : line number counter
 */
void _sub(stack_t **head, unsigned int line_number)
{
	int sub;

	if (!*head || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		free(*head);
		exit(EXIT_FAILURE);
	}

	sub = (*head)->next->n - (*head)->n;
	_pop(&(*head), line_number);
	(*head)->n = sub;
}
