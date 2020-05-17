#include "monty.h"
/**
 * _pstr - prints the string starting at the top of the stack
 * @head : the head node
 * @line_number : line number counter
 */
void _pstr(stack_t **head, unsigned int line_number __attribute__ ((unused)))
{
	stack_t *tmp = *head;

	if (!*head)
	{
		printf("\n");
		return;
	}

	while (tmp && tmp->n > 0)
	{
		if (isascii(tmp->n) > 0)
			printf("%c", tmp->n);
		else
			break;

		tmp = tmp->next;
	}
	printf("\n");
}
