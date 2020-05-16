#include "monty.h"
/**
 * _pop - removes the top element of the stack
 * @head : the head node
 * @line_number : line number counter
 */
void _pop(stack_t **head, unsigned int line_number)
{
	stack_t *tmp = *head;

	if (!*head)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number),
		exit(EXIT_FAILURE);
	}

	if ((*head)->next)
		(*head)->prev = NULL;

	*head = (*head)->next;
	free(tmp);
}
