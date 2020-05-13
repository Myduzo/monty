#include "monty.h"
/**
 * 
 * 
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
