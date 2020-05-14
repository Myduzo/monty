#include "monty.h"
/**
 * pall - print stack elements
 * @stack : pointer to an address
 * @line_number : number of the line printed
 */
void pall(stack_t **stack, unsigned int line_number)
{
    UNUSED(line_number);
    stack_t *head;
    head = *stack;

    while (head)
    {
        printf("%d\n", head->n);
        head = head->next;
    }    
}
