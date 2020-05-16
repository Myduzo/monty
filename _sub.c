#include "monty.h"
/**
 * 
 * 
 */
void _sub(stack_t **head, unsigned int line_number)
{
    int sub;
    if (!*head || !(*head)->next)
    {
        fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
        _free(*head);
        exit(EXIT_FAILURE);
    }

    if ((*head)->n > (*head)->next->n)
        sub = (*head)->n - (*head)->next->n;
    
    else
        sub = (*head)->next->n - (*head)->n;
    
    _pop(&(*head), line_number);
    (*head)->n = sub;
}