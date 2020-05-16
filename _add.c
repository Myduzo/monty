#include "monty.h"
/**
 * _add - adds the top two elements of the stack
 * @head : the head node
 * @line_number : line number counter
 */
void _add(stack_t **head, unsigned int line_number)
{
	int add;
	stack_t *tmp;

	tmp = (*head)->next;

	if (!*head || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free(*head);
		exit(EXIT_FAILURE);
	}

	add = tmp->n + (*head)->n;
	_pop(&(*head), line_number);
	tmp->n = add;
	tmp->prev = NULL;
}
