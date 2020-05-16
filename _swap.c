#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @head : the head node
 * @line_number : line number counter
 */
void _swap(stack_t **head, unsigned int line_number)
{
	int swap;

	if (!*head || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		_free(*head);
		exit(EXIT_FAILURE);
	}

	swap = (*head)->next->n;
	(*head)->next->n = (*head)->n;
	(*head)->n = swap;

}
