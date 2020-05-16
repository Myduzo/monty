#include "monty.h"
char *data;
/**
 * 
 * 
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