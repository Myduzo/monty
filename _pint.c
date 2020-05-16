#include "monty.h"
/**
 * _pint - prints the value at the top of the stack
 * @head : the head node
 * @line_number : line number counter
 */
void _pint(stack_t **head, unsigned int line_number)
{
	if (!*head)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
