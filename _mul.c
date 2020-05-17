#include "monty.h"
/**
 * _mul - multiplies the second top element with the top element
 * @head : the head node
 * @line_number : line number counter
 */
void _mul(stack_t **head, unsigned int line_number)
{
	int mul;

	if (!*head)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		free(*head);
		exit(EXIT_FAILURE);
	}

	mul = (*head)->next->n * (*head)->n;
	_pop(&(*head), line_number);
	(*head)->n = mul;
}
