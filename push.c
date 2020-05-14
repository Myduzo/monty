#include "monty.h"
/**
 * push - push and element to the stack
 * @stack : pointer to an address
 * @line_number : number of the line printed
 */
void push(stack_t **stack, unsigned int line_number)
{
    UNUSED(line_number);
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
