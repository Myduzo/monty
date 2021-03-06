#include "monty.h"
/**
 * _push - push and element to the stack
 * @head : pointer to an address
 * @line_number : number of the line printed
 */
void _push(stack_t **head, unsigned int line_number __attribute__ ((unused)))
{
	stack_t *stack;

	stack = malloc(sizeof(stack_t));
	if (!stack)
	{
		fprintf(stderr, "Error: malloc failed\n");
		_free(*head);
		exit(EXIT_FAILURE);
	}

	if (!data || _isdigit(data) == 1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		_free(*head);
		exit(EXIT_FAILURE);
	}

	stack->n = atoi(data);
	stack->prev = NULL;
	stack->next = NULL;

	if (*head)
	{
		stack->next = *head;
		(*head)->prev = stack;
	}
	*head = stack;
}
