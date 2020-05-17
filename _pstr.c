#include "monty.h"
/**
 * _pstr - prints the string starting at the top of the stack
 * @head : the head node
 * @line_number : line number counter
 */
void _pstr(stack_t **head, unsigned int line_number __attribute__ ((unused)))
{
	if (!*head)
	{
		printf("\n");
	}
	
	while (*head && (*head)->n > 0)
	{
		if (isascii((*head)->n))
		{
			printf("%c", (*head)->n);
		}
		*head = (*head)->next;
	}
	printf("\n");

}
