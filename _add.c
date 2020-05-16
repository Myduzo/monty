#include "monty.h"
/**
 * _add - 
 * 
 */
void _add(stack_t **head, unsigned int line_number)
{
    int add;
    stack_t *tmp;

    tmp = (*head)->next;

    if (!*head || !(*head)->next)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
        _free(*head);
        exit(EXIT_FAILURE);
    }

    add = tmp->n + (*head)->n;
    *head = tmp;
    (*head)->n = add;
    (*head)->prev = NULL;

}