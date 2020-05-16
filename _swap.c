#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @head : the head node
 * @line_number : line number counter
 */
void _swap(stack_t **head, unsigned int line_number __attribute__ ((unused)))
{
	int swap;
	stack_t *tmp;

	tmp = (*head)->next;
	if (!(*head) || !tmp)
	{
		fprintf(stderr, "Error: malloc failed\n"),
		exit(EXIT_FAILURE);
	}

	swap = tmp->n;
	tmp->n = (*head)->n;
	(*head)->n = swap;

}
