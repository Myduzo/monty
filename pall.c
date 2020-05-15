#include "monty.h"
/**
 * _pall - print stack elements
 * @stack : pointer to an address
 * @line_number : number of the line printed
 */
void _pall(stack_t **head, unsigned int line_number)
{
    UNUSED(line_number);
    stack_t *stack = *head;
    
    while (*head)
    {
        printf("%d\n", stack->n);
        stack = stack->next;
    }    
}
