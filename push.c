#include "monty.h"
/**
 * 
 * 
 */
void push(stack_t **stack, unsigned int line_number, char *data)
{
    stack_t *head;
    
    head = malloc(sizeof(stack_t));
    if (!head)
    {
        fprintf(stderr, "Error: malloc failed\n"); 
        fclose(file);
        exit(EXIT_FAILURE);
    }

    if (!data || !isdigit(data))
    {
        fprintf(stderr,"L%d: usage: push integer\n", line_number);
        fclose(file);
        exit(EXIT_FAILURE);
    }

    head->n = atoi(data);
    head->prev = NULL;

    if(*stack)
    {
        head->next = *stack;
        (*stack)->prev = head;
        *stack = head;
    }
    else
    {
        head->next = NULL;
        *stack = head;
    }   
}
